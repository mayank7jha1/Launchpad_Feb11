#include<iostream>
using  namespace std;
#define int long long
int n, m, p;
int grid[1001][1001] {0};
#define mod 1000000007

int TotalWays() {

	int dp[1001][1001] {0};

	if (grid[1][1] == -1 or grid[n][m] == -1) {
		return 0;
	}


	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= m; j = j + 1) {

			if (i == 1 and j == 1) {
				dp[i][j] = 1;
				continue;
			}

			if (grid[i][j] == -1) {
				dp[i][j] = 0;
			} else {

				if (i == 1) {
					dp[i][j] = dp[i][j - 1] % mod;
				} else if (j == 1) {
					dp[i][j] = dp[i - 1][j] % mod;
				} else {
					dp[i][j] = ((dp[i - 1][j] % mod) + (dp[i][j - 1]) % mod) % mod;
				}
			}
		}
	}

	return dp[n][m];
}

int32_t main() {
	cin >> n >> m >> p;

	while (p > 0) {
		int x, y;
		cin >> x >> y;
		grid[x][y] = -1;
		p = p - 1;
	}

	cout << TotalWays() << endl;
}