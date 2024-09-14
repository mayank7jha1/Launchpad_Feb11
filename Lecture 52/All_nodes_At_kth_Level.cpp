#include<iostream>
#include<vector>
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
	unordered_map<TreeNode*, TreeNode*>Parent;
	unordered_map<TreeNode*, bool>visited;

	void Ancestor(TreeNode* root, TreeNode* p) {
		if (root == NULL) {
			return;
		}

		Parent[root] = p;
		Ancestor(root->left, root);
		Ancestor(root->right, root);
	}

	void dfs(TreeNode* root, int k, vector<int>&ans) {

		if (root == NULL or visited.count(root) == 1) {
			return;
		}

		visited.insert({root, 1});
		if (k == 0) {
			ans.push_back(root->val);
		}

		//Recursion  Call
		dfs(root->left, k - 1, ans);
		dfs(root->right, k - 1, ans);

		//Parent par call
		dfs(Parent[root], k - 1, ans);

	}

	vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
		vector<int>ans;
		if (root == NULL) {
			return ans;
		}

		Ancestor(root, NULL);
		dfs(target, k, ans);
		return ans;
	}
};