#include<iostream>
#include<climits>
#include<algorithm>
using  namespace std;
int pre[1001][1000002] = {{0}};

int main() {

	int n, m;
	cin >> n >> m;


	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= m; j = j + 1) {
			int x, y;
			cin >> x >> y;
			pre[x][y] = 1;
		}
	}

	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= m; j = j + 1) {
			//Row Wise Prefix
			pre[i][j] = pre[i][j - 1] + pre[i][j];
		}
	}

	for (int j = 1; j <= m; j = j + 1) {
		for (int i = 1; i <= n; i = i + 1) {
			//Column Wise Prefix
			pre[i][j] = pre[i - 1][j] + pre[i][j];
		}
	}



	// for (int j = 1; j <= m; j = j + 1) {
	// 	for (int i = 1; i <= n; i = i + 1) {
	// 		//Column Wise Prefix
	// 		cout << pre[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	// cout << endl;

	int ans = INT_MIN;

	for (int i = 1; i < n; i = i + 1) {
		for (int j = 1; j < m; j = j + 1) {

			int Op1 = pre[i][j];
			int Op2 = pre[i][m] - Op1;
			int Op3 = pre[n][j] - Op1;
			int Op4 = pre[n][m] - Op1 - Op2 - Op3;

			int value = min({Op1, Op2, Op3, Op4});
			ans = max(ans, value);
		}
	}

	cout << ans << endl;

}






