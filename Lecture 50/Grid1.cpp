#include<iostream>
using  namespace std;
#define int long long
#define mod 1000000007
char grid[1001][1001];


int  TotalWays(int h, int w) {

	int dp[1001][1001] {0};

	if (grid[1][1] == '#' or grid[h][w] == '#') {
		return 0;
	}

	for (int i = h; i >= 1; i = i - 1) {
		for (int j = w; j >= 1; j = j - 1) {

			if (i == h and j == w) {
				dp[i][j] = 1;
				continue;
			}

			if (grid[i][j] == '#') {
				dp[i][j] = 0;
			} else {

				if (i == h) {
					dp[i][j] = (dp[i][j + 1]) % mod;
				} else if (j == w) {
					dp[i][j] = (dp[i + 1][j]) % mod;

				} else {

					dp[i][j] = (dp[i + 1][j] % mod + dp[i][j + 1] % mod) % mod;
				}
			}
		}
	}

	return dp[1][1];
}



int32_t main() {
	int h, w;
	cin >> h >> w;

	for (int i = 1; i <= h; i = i + 1) {
		for (int j = 1; j <= w; j = j + 1) {
			cin >> grid[i][j];
		}
	}

	cout << TotalWays(h, w) << endl;


}