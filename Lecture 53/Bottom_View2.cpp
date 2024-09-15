#include<iostream>
#include<vector>
#include<map>
#include<queue>
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


vector<int>BottomView(TreeNode* root) {

	vector<int>ans;
	if (root == NULL) {
		return ans;
	}

	//Storing Column and Value.
	map<int, int>mp;
	queue<pair<TreeNode*, int>>q;

	q.push({root, 0});

	while (!q.empty()) {

		pair<TreeNode*, int>p = q.front();
		q.pop();

		TreeNode* node = p.first;
		int Column = p.second;

		mp[Column] = node->val;

		if (node->left != NULL) {
			q.push({node->left, Column - 1});
		}

		if (node->right != NULL) {
			q.push({node->right, Column + 1});
		}

	}


	for (auto x : mp) {
		ans.push_back(x.second);
	}

	return ans;
}

TreeNode*Buildtree() {

	int x;
	cin >> x;

	if (x == -1) {
		return NULL;

	} else {

		TreeNode*r = new TreeNode(x);
		// (*r).left = Buildtree();
		r->left = Buildtree();
		r->right = Buildtree();

		return r;
	}
}

void Preorder(TreeNode*root) {

	if (root == NULL) {
		return;
	}

	cout << root->val << " ";
	Preorder(root->left);
	Preorder(root->right);
}





int main() {
	TreeNode* root = Buildtree();
	Preorder(root);
	cout << endl;

	vector<int>a = BottomView(root);

	for (auto x : a) {
		cout << x << " ";
	}
}













