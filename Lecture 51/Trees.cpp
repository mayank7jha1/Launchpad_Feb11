#include<iostream>
#include"Trees.h"
using  namespace std;

int main() {
	node<int>* root = Buildtree();
	// Preorder(root);
	// cout << endl;
	// Inorder(root);
	// cout << endl;
	// Postorder(root);
	// cout << endl;
	// cout << Height(root) << endl;
	// cout << CountNodes(root) << endl;
	// cout << SumofNodes(root) << endl;
	// LeftView(root, 0);
	// cout << endl;
	// RightView(root, 0);
	// cout << endl;
	// Mirror(root);
	// Preorder(root);
	// cout << endl;
	// Inorder(root);
	// cout << endl;
	// Postorder(root);
	// cout << endl;

	bfs(root);
	cout << endl;
	bfs2(root);
	cout << endl;
}