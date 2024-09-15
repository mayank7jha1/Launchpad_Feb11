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

void Solve(TreeNode* root, unordered_map<int, int>&ump, int col) {

	if (root == NULL) {
		return;
	}

	if (ump.count(col) == 0) {
		ump[col] = root->val;
	}

	Solve(root->left, ump, col - 1);
	Solve(root->right, ump, col + 1);

}


vector<int>TopView(TreeNode* root) {

	vector<int>ans;
	if (root == NULL) {
		return ans;
	}

	//Storing Vertical Line and Value.
	unordered_map<int, int>ump;

	Solve(root, ump, 0);

	for (auto x : ump) {
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

	vector<int>a = TopView(root);

	for (auto x : a) {
		cout << x << " ";
	}
}













