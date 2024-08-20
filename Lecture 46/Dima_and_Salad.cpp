#include<iostream>
#include<climits>
#include<cstring>
using  namespace std;
const int N = 1e5;
int n, k;//Global Variable.
int *a, *b;
int dp[101][200005];

int Solve(int index, int sum) {

	if (index == n) {
		if (sum == 0) {
			//This was a valid Path;
			return 0;
		} else {
			//This is not a valid Path.
			return INT_MIN;
		}
	}

	//Calculate karne se pehle check
	if (dp[index][sum + N] != -1) {
		return dp[index][sum + N];
	}

	//For this index variable fruit.

	//Choose this fruit.
	int Op1 = a[index] +
	          Solve(index + 1, sum + (a[index] - k * b[index]));

	//Not Choose this fruit.
	int Op2 = 0 + Solve(index + 1, sum);

	int ans = max(Op1, Op2);

	//Return karne se pehle store.
	return dp[index][N + sum] = ans;
}



int main() {
	cin >> n >> k;
	a = new int[n];
	b = new int[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cin >> b[i];
	}

	memset(dp, -1, sizeof(dp));

	int ans = Solve(0, 0);

	if (ans <= 0) {
		cout << "-1" << endl;
	} else {
		cout << ans << endl;
	}
}










