#include<iostream>
#include<vector>
using  namespace std;
vector<int>tree[200001];
int dp[200001][2];


void Solve(int node, int parent) {

	vector<int>pre, suffix;

	dp[node][0] = dp[node][1] = 0;
	bool leaf = 1;//You have Assumed Current node is leaf node.

	for (auto child : tree[node]) {
		if (child != parent) {
			//Your assumption for leaf node fails here.
			leaf = 0;
			Solve(child, node);
		}
	}


	if (leaf == 1) {
		return;
	}

	//If You are standing here you  have a answer.
	for (auto child : tree[node]) {
		if (child != parent) {
			pre.push_back(max(dp[child][0], dp[child][1]));
			suffix.push_back(max(dp[child][0], dp[child][1]));
		}
	}

	for (int i = 1; i < pre.size(); i++) {
		pre[i] = pre[i - 1] + pre[i];
	}

	for (int i = suffix.size() - 1; i >= 0; i--) {
		suffix[i] = suffix[i + 1] + suffix[i];
	}

	cout << node << " " << parent << endl;

	for (int i = 0; i < pre.size(); i++) {
		cout << pre[i] << " ";
	}
	cout << endl;
	for (int i = suffix.size() - 1; i >= 0; i--) {
		cout << suffix[i] << " ";
	}
	cout << endl;

	cout << "-------------------------" << endl;

	//Exclude
	dp[node][0] = suffix[0];

	//Include
	int children_count = 0;

	for (auto child : tree[node]) {
		if (child == parent) {
			continue;
		}

		int left_Matching_Sum = 0;
		if (children_count > 0) {
			left_Matching_Sum = pre[children_count - 1];
		}

		int right_Matching_Sum = 0;
		if (children_count < suffix.size() - 1) {
			right_Matching_Sum = suffix[children_count + 1];
		}

		dp[node][1] = max(dp[node][1], 1 + left_Matching_Sum +
		                  right_Matching_Sum);

		children_count++;
	}
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

	//I have Assumed my Graph to be rooted
	// at 1.

	Solve(1, 0);
	cout << max(dp[1][0], dp[1][1]) << endl;
}