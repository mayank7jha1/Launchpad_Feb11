#include<iostream>
#include<climits>
#include"../Lecture 38/Trees.h"
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
	// cout << Diameter(root) << endl;

	// cout << Diameter2(root).Height << " "
	//      << Diameter2(root).Diameter << endl;

	// Diameter3(root);
	// cout << maxi << endl;

	// cout << isHeightBalanced(root).first << " " <<
	//      isHeightBalanced(root).second << endl;

	// cout << endl;

	//PrintkthLevel(root, 3);
	PrintALLLevel(root);
}