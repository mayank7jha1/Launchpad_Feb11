#include<iostream>
#include<unordered_map>
using  namespace std;

class TreeNode {
public:
	int val;
	TreeNode *left;
	TreeNode *right;

	TreeNode(int x) {
		val = x;
		left = NULL;
		right = NULL;
	}
};


class Solution {
public:
	unordered_map<TreeNode*, bool>um;
	int count;

	void Solve(TreeNode* root, TreeNode* parent) {

		if (root == NULL) {
			return;
		}


		//I will Folow Post order Traversal
		Solve(root->left, root);
		Solve(root->right, root);


		//Actual Work Karna hain.
		//You are checking if you want to deploy camera on
		//root orr not.

		if ((parent == NULL and um.count(root) == 0) or

		        (um.count(root->left) == 0)

		        and (um.count(root->right) == 0)) {

			um[parent] = 1;
			um[root] = 1;
			um[root->left] = 1;
			um[root->right] = 1;
			count++;
		}

	}

	int minCameraCover(TreeNode* root) {
		count = 0;
		// um.insert(make_pair(NULL, true));
		um.insert({NULL, true});

		//Updation:
		//um[NULL] = true;

		Solve(root, NULL);

		return count;
	}
};

int main() {

}