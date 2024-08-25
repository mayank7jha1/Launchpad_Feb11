#include<iostream>
#include<vector>
using  namespace std;
const int N = 103;
#define mod 1000000007
#define int long long

int n, k;
vector<int>a;
int dp[N][100001];


int Solve() {

	//Part 1: Edge Case:

	for (int j = 0; j <= k; j = j + 1) {
		if (j <= a[1]) {
			dp[1][j] = 1;
		} else {
			dp[1][j] = 0;
		}
	}


	//Part 2:

	for (int i = 2; i <= n; i = i + 1) {
		for (int j = 0; j <= k; j = j + 1) {

			if (j == 0) {
				dp[i][j] = dp[i - 1][j];
			} else {


				int A = dp[i][j - 1] % mod;
				int B = dp[i - 1][j] % mod;
				int C = 0;

				if (j - a[i] - 1 >= 0) {
					C = dp[i - 1][j - a[i] - 1] % mod;
				}

				dp[i][j] = (A + B - C + mod) % mod;
			}
		}
	}

	return  dp[n][k];

}



int32_t main() {
	cin >> n >> k;
	a.resize(n);

	for (int i = 1; i <= n; i = i + 1) {
		cin >> a[i];
	}

	cout << Solve() << endl;;
}

















