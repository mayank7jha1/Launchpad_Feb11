#include<iostream>
#include"../Lecture_36/Linked_List.h"
using  namespace std;



int main() {
	node<int>* head = NULL;
	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;

		InsertAtHead(head, x);
	}

	Print(head);
	// Print(head);

	// cout << Search(head, 16) << endl;
	// cout << SearchRecursively(head, 3) << endl;
	// cout << Length(head) << endl;
	// cout << Tail(head) << endl;
	// cout << MidPoint1(head) << endl;
	// cout << MidPoint2(head) << endl;
	// cout << MidPoint3(head)->data << endl;

	// node<int>*head2 = Reverse(head);
	// Print(head2);
	// cout << endl;
	// Print(head);

	cout << isCycle(head) << endl;
	CycleCreation(head);
	cout << isCycle(head) << endl;
	CycleRemoval(head);
	cout << isCycle(head) << endl;
}













