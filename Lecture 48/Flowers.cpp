#include<iostream>
using  namespace std;
int k;
int dp1[100001];
int dp2[100001] = {0};
int pre[100001] {0};
#define mod 1000000007

int RecursiveDP(int n) {

	if (n == 0) {
		//You have found 1 way to put Flowers.
		return 1;
	}

	if (dp1[n] != -1) {
		return dp1[n];
	}

	int Op1 = RecursiveDP(n - 1) % mod;
	int Op2 = 0;

	if (n - k >= 0) {
		Op2 = RecursiveDP(n - k) % mod;
	}

	return dp1[n] = (Op1 + Op2) % mod;

}

void IterativeDP(int n) {

	dp2[0] = 1;

	if (k == 1) {
		dp2[1] = 2;
	} else {
		dp2[1] = 1;
	}

	for (int i = 2; i <= n; i = i + 1) {
		dp2[i] = (dp2[i - 1] % mod + dp2[i - 2] % mod) % mod;
	}
}

void Solve() {

	IterativeDP(100001);

	pre[1] = dp2[1];

	for (int i = 2; i <= 100001; i = i + 1) {
		pre[i] = (pre[i - 1] % mod + dp2[i] % mod) % mod;
	}
}


int main() {
	int t;
	cin >> t >> k;
	Solve();

	while (t > 0) {
		int a, b;
		cin >> a >> b;
		//memset(dp1, -1, sizeof(dp1));
		//cout << RecursiveDP(n) << endl;;

		cout << pre[b] - pre[a - 1] << endl;

		t = t - 1;
	}

}










