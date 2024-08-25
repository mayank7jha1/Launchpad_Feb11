#include<iostream>
using  namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int pre[1001][1001] = {{0}};

	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= m; j = j + 1) {
			cin >> pre[i][j];
		}
	}

	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= m; j = j + 1) {
			//Row Wise Prefix
			pre[i][j] = pre[i][j - 1] + pre[i][j];
		}
	}

	// for (int i = 1; i <= n; i = i + 1) {
	// 	for (int j = 1; j <= m; j = j + 1) {
	// 		cout << pre[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	for (int j = 1; j <= m; j = j + 1) {
		for (int i = 1; i <= n; i = i + 1) {
			//Column Wise Prefix
			pre[i][j] = pre[i - 1][j] + pre[i][j];
		}
	}

	// for (int i = 1; i <= n; i = i + 1) {
	// 	for (int j = 1; j <= m; j = j + 1) {
	// 		cout << pre[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }


	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= m; j = j + 1) {
			cout << pre[i][j] << " ";
		}
		cout << endl;
	}
}








