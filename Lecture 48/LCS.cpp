#include<iostream>
using  namespace std;
string s, t;
int dp[3001][3001];

int Solve(int i, int j) {

	if (i >= s.length() or j >= t.length()) {
		//One of the above strings have been exhausted.
		return 0;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	int Op1 = 0, Op2 = 0;

	//s[i]=t[j]
	if (s[i] == t[j]) {

		int ans = 1 + Solve(i + 1, j + 1);
		return dp[i][j] = ans;

	} else {

		//s[i]!=t[j]
		Op1 = dp[i + 1][j] = Solve(i + 1, j);
		Op2 = dp[i][j + 1] = Solve(i, j + 1);
		return dp[i][j] = max(Op1, Op2);
	}
}

int main() {
	cin >> s >> t;
	memset(dp, -1, sizeof(dp));
	int ans = Solve(0, 0);

	for (int i = 0; i < s.length(); i = i + 1) {
		for (int j = 0; j < t.length(); j = j + 1) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	//cout << endl;
	//cout << ans << endl;
}





