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

string PrintLCS(int i, int j, int LCS) {


	string ans = "";

	while (LCS > 0) {

		if (s[i] == t[j]) {
			ans.push_back(s[i]);
			LCS = LCS - 1;
			i = i + 1;
			j = j + 1;
		} else {

			//s[i]!=t[j]

			if (dp[i + 1][j] > dp[i][j + 1]) {
				i = i + 1;
			} else {
				j = j + 1;
			}
		}
	}

	return ans;
}

string getLCS(int i, int j) {
	memset(dp, -1, sizeof(dp));
	int length = Solve(0, 0);

	return PrintLCS(0, 0, length);
}

int main() {
	cin >> s >> t;
	string ans = getLCS(0, 0);
	cout << ans << endl;
}





