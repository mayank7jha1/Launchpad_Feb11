#include<iostream>
#include<climits>
#include<algorithm>
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



//Diameter of a Tree:
int Diameter(node<int>*root) {

	if (root == NULL) {
		return 0;
	}

	int Op1 = Diameter(root->left);
	int Op2 = Diameter(root->right);
	int Op3 = Height(root->left) + Height(root->right);

	return max({Op1, Op2, Op3});
}


//Optimised Diameter: n Computation
class Pair {
public:
	int Height;
	int Diameter;

	Pair() {
		Height = 0;
		Diameter = 0;
	}
};


Pair Diameter2(node<int>*root) {

	Pair x;

	if (root == NULL) {
		x.Height = 0;
		x.Diameter = 0;
		return  x;
	}


	Pair Left_Subtree = Diameter2(root->left);
	Pair Right_Subtree = Diameter2(root->right);

	//I Have To do 2 things: Height calculate
	//karni hain and diametere calculate karna hain.

	x.Height = max(Left_Subtree.Height,
	               Right_Subtree.Height) + 1;

	x.Diameter = max({Left_Subtree.Diameter,
	                  Right_Subtree.Diameter,
	                  Left_Subtree.Height + Right_Subtree.Height
	                 });

	return x;
}



//Diameter of Tree 3:
int maxi = 0;

int Diameter3(node<int>*root) {

	if (root == NULL) {
		return 0;
	}


	int LSH = Diameter3(root->left);
	int RSH = Diameter3(root->right);

	maxi = max(maxi, LSH + RSH);

	int Height = 1 + max(LSH, RSH);
	return Height;
}


//Inbuilt Pair:
/*
	pair<int,int>p1:
	p1.first: balanced hain ki nahi.
	p1.second: Height kya hain.

*/

pair<bool, int>isHeightBalanced(node<int>*root) {

	pair<bool, int>x;

	if (root == NULL) {
		x.first = 1;
		x.second = 0;
		return x;
	}

	pair<bool, int>LS = isHeightBalanced(root->left);
	pair<bool, int>RS = isHeightBalanced(root->right);
	x.second = max(LS.second, RS.second) + 1;

	if (LS.first == 1 and RS.first == 1 and
	        abs(LS.second - RS.second) <= 1) {
		x.first = 1;
	} else {
		x.first = 0;
	}

	return x;

}

//Print the kth Level: Indexing is 1 based.

void PrintkthLevel(node<int>*root, int k) {

	if (root == NULL) {
		return;
	}

	if (k == 1) {
		cout << root->data << " ";
		return;
	}

	PrintkthLevel(root->left, k - 1);
	PrintkthLevel(root->right, k - 1);

	return;
}

//n^2:
void PrintALLLevel(node<int>*root) {

	int H = Height(root);

	for (int i = 1; i <= H; i = i + 1) {

		PrintkthLevel(root, i);
		cout << endl;
	}

}











