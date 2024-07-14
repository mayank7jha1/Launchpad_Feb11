#include<iostream>
using  namespace std;

template<typename T>
class node {
public:
	T data;
	node* next;

	//Constructor
	node(T inputdata) {
		data = inputdata;
		next = NULL;
	}
};

//Insertion
void InsertAtHead(node<int>*&head, int d) {
	node<int>*n = new node(d);
	n->next = head;
	head = n;
}


//Traversal
void Print(node<int>*head) {

	while (head != NULL) {
		cout << head->data << " -> ";
		head = head->next;
	}

	cout << "NULL" << endl;
}

//Search
bool Search(node<int>*head, int key) {

	while (head != NULL) {

		if (head->data == key) {
			return true;
		}

		head = head->next;
	}
	return false;
}

//SearchRecursively
bool SearchRecursively(node<int>*head, int key) {

	if (head == NULL) {
		return false;
	}

	if (head->data == key) {
		return true;
	}

	return SearchRecursively(head->next, key);
}

//Length
int Length(node<int>*head) {
	node<int>*temp = head;
	int count = 0;

	while (temp != NULL) {
		count = count + 1;
		temp = temp->next;
	}

	// while (head != NULL) {
	// 	count = count + 1;
	// 	head = head->next;
	// }

	return count;
}


//Last Node
int Tail(node<int>*head) {

	while (head->next != NULL) {
		head = head->next;
	}

	//You will be standing at the last node.
	return head->data;
}

//Mid Point 1: Double Iteration
int MidPoint1(node<int>* head) {

	int ans = Length(head);
	ans = ans / 2;

	while (ans > 0) {
		head = head->next;
		ans = ans - 1;
	}

	return head->data;
}

/*MidPoint 2: Single Iteration using 2 Pointer
Second Mid Point in case of Even Linked List*/
int MidPoint2(node<int>*head) {
	node<int>*fast = head;
	node<int>*slow = head;

	while (fast != NULL and fast->next != NULL) {

		// fast = fast->next;
		// fast = fast->next;

		fast = fast->next->next;
		slow = slow->next;

	}

	return slow->data;
}

/*MidPoint 3: Single Iteration using 2 Pointer
First Mid Point in case of Even Linked List*/
node<int>*MidPoint3(node<int>*head) {

	node<int>*fast = head->next;
	node<int>*slow = head;
	while (fast != NULL and fast->next != NULL) {

		// fast = fast->next;
		// fast = fast->next;

		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}



































