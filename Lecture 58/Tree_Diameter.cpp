#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;
vector<int>tree[200001];

int diameter[200001]; //diameter of the tree.
int downpaths[200001];//Longest Simple Path in Subtree rooted at i that starts from i.

void Evaluate_DownPaths(int node, int parent) {

	int bestchildDownPath = 0;
	int leaf = 1;

	for (auto child : tree[node]) {

		if (child != parent) {
			leaf = 0;
			Evaluate_DownPaths(child, node);
			bestchildDownPath = max(bestchildDownPath, downpaths[child]);
		}
	}

	if (leaf == 1) {
		downpaths[node] = 0;

	} else {
		downpaths[node] = 1 + bestchildDownPath;
	}
}

void Solve(int node, int parent) {

	int ans = 0;
	vector<int>childDownPaths;

	for (auto child : tree[node]) {
		if (child != parent) {

			Solve(child, node);
			childDownPaths.push_back(downpaths[child]);

			//int Op1=Diameter does not pass through root node.
			ans = max(ans, diameter[child]);
		}
	}

	int NoofChild = childDownPaths.size();
	sort(childDownPaths.rbegin(), childDownPaths.rend());

	if (NoofChild == 0) {
		diameter[node] = 0;
	} else if (NoofChild == 1) {
		diameter[node] = 1 + childDownPaths[0];
	} else {
		// Op2: Diameter passs through root node.
		diameter[node] = 2 + childDownPaths[0] + childDownPaths[1];
	}

	diameter[node] = max(ans, diameter[node]);
	return;
}

int main() {
	int n;
	cin >> n;

	for (int i = 2; i < n + 1; i++) {
		int x, y;
		cin >> x >> y;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}

	Evaluate_DownPaths(1, 0);
	Solve(1, 0);
	cout << diameter[1] << endl;

}








