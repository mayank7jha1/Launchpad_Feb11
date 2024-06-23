#include<iostream>
using  namespace std;
string s, t;

int Solve(int i, int j) {

	if (i >= s.length() or j >= t.length()) {
		//One of the above strings have been exhausted.
		return 0;
	}

	//s[i]=t[j]
	if (s[i] == t[j]) {

		int ans = 1 + Solve(i + 1, j + 1);
		return ans;

	} else {

		//s[i]!=t[j]
		int Op1 = Solve(i + 1, j);
		int Op2 = Solve(i, j + 1);
		return max(Op1, Op2);
	}

}

int main() {
	cin >> s >> t;
	int ans = Solve(0, 0);
	cout << ans << endl;
}





