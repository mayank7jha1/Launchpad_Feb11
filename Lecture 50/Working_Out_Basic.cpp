#include<iostream>
using  namespace std;
#define int long long


/*
	dp1[i][j]: Maximum Cost from (1,1) to (i,j).
	dp2[i][j]: Maximum Cost from (n,m) to (i,j).


	dp3[i][j]: Maximum Cost from (n,1) to (i,j).
	dp4[i][j]: Maximum Cost from (1,m) to (i,j).

*/

int dp1[101][101];
int dp2[101][101];
int dp3[101][101];
int dp4[101][101];

int cost[101][101];

int32_t main() {

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= m; j = j + 1) {
			cin >> cost[i][j];
		}
	}


	//Dp1:

	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= m; j = j + 1) {

			if (i == 1 and j == 1) {
				dp1[i][j] = cost[i][j];
				continue;
			} else if (i == 1) {
				dp1[i][j] = dp1[i][j - 1] + cost[i][j];
			} else if (j == 1) {
				dp1[i][j] = dp1[i - 1][j] + cost[i][j];
			} else {
				dp1[i][j] = max(dp1[i - 1][j], dp1[i][j - 1]) + cost[i][j];
			}
		}
	}

	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= m; j = j + 1) {
			cout << dp1[i][j] << " ";
		}
		cout << endl;
	}

	//Dp2:
	for (int i = n; i >= 1; i = i - 1) {
		for (int j = m; j >= 1; j = j - 1) {
			if (i == n and j == m) {
				dp2[i][j] = cost[i][j];
				continue;
			} else if (i == n) {
				dp2[i][j] = dp2[i][j + 1] + cost[i][j];
			} else if (j == m) {
				dp2[i][j] = dp2[i + 1][j] + cost[i][j];
			} else {

				dp2[i][j] = max(dp2[i + 1][j], dp2[i][j + 1]) + cost[i][j];
			}
		}
	}
	cout << endl << endl;
	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= m; j = j + 1) {
			cout << dp2[i][j] << " ";
		}
		cout << endl;
	}



	//Dp3:
	for (int i = n; i >= 1; i = i - 1) {
		for (int j = 1; j <= m; j = j + 1) {

			if (i == n and j == 1) {
				dp3[i][j] = cost[i][j];
				continue;
			} else if (i == n) {
				dp3[i][j] = dp3[i][j - 1] + cost[i][j];
			} else if (j == 1) {
				dp3[i][j] = dp3[i + 1][j] + cost[i][j];
			} else {

				dp3[i][j] = max(dp3[i + 1][j], dp3[i][j - 1]) + cost[i][j];
			}
		}
	}
	cout << endl << endl;

	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= m; j = j + 1) {
			cout << dp3[i][j] << " ";
		}
		cout << endl;
	}

	//Dp4:
	for (int i = 1; i <= n; i = i + 1) {
		for (int j = m; j >= 1; j = j - 1) {

			if (i == 1 and j == m) {
				dp4[i][j] = cost[i][j];
				continue;
			} else if (i == 1) {
				dp4[i][j] = dp4[i][j + 1] + cost[i][j];
			} else if (j == m) {
				dp4[i][j] = dp4[i - 1][j] + cost[i][j];
			} else {
				dp4[i][j] = max(dp4[i - 1][j], dp4[i][j + 1]) + cost[i][j];
			}

		}
	}
	cout << endl << endl;

	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= m; j = j + 1) {
			cout << dp4[i][j] << " ";
		}
		cout << endl;
	}

}