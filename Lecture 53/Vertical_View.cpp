#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<set>
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


vector<int>VerticalView(TreeNode* root) {

	vector<int>ans;
	if (root == NULL) {
		return ans;
	}

	//Storing Column,Level,Node.
	map<int, map<int, multiset<int>>>mp;

	//Auto: pair<int,map<int, multiset<int>>>

	// unordered_map<int, int>ump;
	// vector<vector<int>>ans;

	// map<int, int>mp1;

	queue < pair<TreeNode*, pair<int, int>>q;

	q.push({root, {0, 0}});

	//First: Node
	//Second: Column
	//Third: Level

	while (!q.empty()) {

		pair < TreeNode*, pair<int, int>>p = q.front();
		q.pop();

		TreeNode* node = p.first;
		int Column = p.second.first;
		int Level = p.second.second;

		mp[Column][Level] = node->val;

		if (node->left != NULL) {
			q.push({node->left, {Column - 1, Level + 1}});
		}

		if (node->right != NULL) {
			q.push({node->right, {Column + 1, Level + 1}});
		}
	}

	vector<vector<int>>ans;

	for (pair<int, map<int, multiset<int>>>x : mp) {

		vector<int>current;


		for (pair<int, multiset<int>> y : x.second) {
			//y is a Pair of Level and Nodes.

			// int Level = y.first;
			// multiset<int>s1 = y.second;

			// for (int t : s1) {

			// 	current.push_back(t);

			// }

			current.insert(current.end(), y.second.begin(), y.second.end());
		}

		ans.push_back(current);

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

void Preorder(TreeNode * root) {

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

	vector<int>a = VerticalView(root);

	for (auto x : a) {
		cout << x << " ";
	}
}













