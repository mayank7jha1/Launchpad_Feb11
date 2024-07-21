#include<iostream>
using  namespace std;

template<typename T>

class node {
public:
	T data;
	node* left;
	node* right;

	//Constructor
	node(T inputdata) {
		data = inputdata;
		left = NULL;
		right = NULL;
	}
};


node<int>*Buildtree() {

	int x;
	cin >> x;

	if (x == -1) {
		return NULL;

	} else {

		node<int>*r = new node(x);
		// (*r).left = Buildtree();
		r->left = Buildtree();
		r->right = Buildtree();

		return r;
	}
}

void Preorder(node<int>*root) {

	if (root == NULL) {
		return;
	}

	cout << root->data << " ";
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(node<int>*root) {

	if (root == NULL) {
		return;
	}

	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);
}



void Postorder(node<int>*root) {

	if (root == NULL) {
		return;
	}

	Postorder(root->left);
	Postorder(root->right);
	cout << root->data << " ";
}


//Height of Tree:
int Height(node<int>*root) {

	if (root == NULL) {
		return 0;
	}

	int LSH = Height(root->left);
	int RSH = Height(root->right);


	return max(LSH, RSH) + 1;
}

//CountNodes:
int CountNodes(node<int>*root) {

	if (root == NULL) {
		return 0;
	}

	int LSH = CountNodes(root->left);
	int RSH = CountNodes(root->right);

	int ans = LSH + RSH + 1;
	return ans;
}

//Sum of Nodes:
int SumofNodes(node<int>*root) {

	if (root == NULL) {
		return 0;
	}

	int LSH = SumofNodes(root->left);
	int RSH = SumofNodes(root->right);

	int ans = LSH + RSH + root->data;
	return ans;
}

//Left View:
int MaxLevel = -1;

//You are always visiting the left node first.
void LeftView(node<int>*root, int Level) {

	if (root == NULL) {
		return;
	}


	if (Level > MaxLevel) {
		cout << root->data << " ";
		MaxLevel = Level;
	}

	LeftView(root->left, Level + 1);
	LeftView(root->right, Level + 1);
}

//You are always visiting the right node first.
int MaxLevel2 = -1;
void RightView(node<int>*root, int Level) {

	if (root == NULL) {
		return;
	}


	if (Level > MaxLevel2) {
		cout << root->data << " ";
		MaxLevel2 = Level;
	}

	RightView(root->right, Level + 1);
	RightView(root->left, Level + 1);
}

//Mirror of Tree.
void Mirror(node<int>*root) {

	if (root == NULL) {
		return;
	}

	swap(root->left, root->right);
	Mirror(root->left);
	Mirror(root->right);
}


//Diameter of Tree:
int maxi = INT_MIN;

int Diameter(node<int>*root) {

	if (root == NULL) {
		return 0;
	}


	int LSH = Diameter(root->left);
	int RSH = Diameter(root->right);

	maxi = max(maxi, LSH + RSH + 1);
}

















