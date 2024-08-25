#include<iostream>
using  namespace std;
#define int long long
int n, p, k;
int cost[200001];

int Price() {

	int dp[200001];
	/*	Dp[i]: Maximum Price that you are
		going  to spend if you want to buy all the
		items till i.
	*/

	for (int i = 0; i < n; i = i + 1) {
		if (i < k - 1) {
			dp[i] = dp[i - 1] + cost[i];
		} else if (i == k - 1) {
			dp[i] = cost[i];
		} else {

			dp[i] = dp[i - k] + cost[i];
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i = i + 1) {
		if (dp[i] <= p) {
			ans = i + 1;
		}
	}

	return ans;
}

int32_t main() {
	int t;
	cin >> t;

	while (t > 0) {

		cin >> n >> p >> k;

		for (int i = 0; i < n; i = i + 1) {
			cin >> cost[i];
		}


		sort(cost, cost + n);

		cout << Price() << endl;

		t = t - 1;
	}
}





