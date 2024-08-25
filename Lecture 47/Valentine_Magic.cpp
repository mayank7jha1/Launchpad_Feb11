#include<iostream>
#include<algorithm>
using  namespace std;
#define int long long
const int N = 5002;
int n, m;
int a[N], b[N];
int dp[N][N];

int Solve(int i, int j) {

	if (i == n) {
		return 0;
	}

	if (j == m) {
		return 1e12;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	//Boy i is not pairing with the girl j.
	int Op1 = 0 + Solve(i, j + 1);

	//Solve(i+1,j): This Situation will never happen.

	//Pair Bana Liya.
	int Op2 = abs(a[i] - b[j]) + Solve(i + 1, j + 1);

	return dp[i][j] = min(Op1, Op2);
}


int32_t main() {
	cin >> n >> m;
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	for (int i = 0; i < m; i = i + 1) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + m);

	memset(dp, -1, sizeof(dp));

	cout << Solve(0, 0) << endl;
}







