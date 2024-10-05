#include<iostream>
#include<vector>
using  namespace std;
vector<int>tree[200001];

void Solve(int node, int parent, vector<int>&dp) {

	int Subordinates = 0;

	for (auto child : tree[node]) {
		if (child != parent) {
			Solve(child, node, dp);
			Subordinates = Subordinates + 1 + dp[child];
		}
	}

	dp[node] = Subordinates;
}

int main() {
	int n;
	cin >> n;

	vector<int>dp(n + 1);

	for (int i = 2; i < n + 1; i++) {
		int x;
		cin >> x;
		tree[x].push_back(i);
		tree[i].push_back(x);
	}

	//I have Assumed my Graph to be rooted
	// at 1.

	Solve(1, 0, dp);

	for (int i = 1; i < n + 1; i++) {
		cout << dp[i] << " ";
	}
}





