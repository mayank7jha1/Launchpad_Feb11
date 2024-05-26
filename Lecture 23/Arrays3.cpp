#include<iostream>
using  namespace std;

int main() {

	// int n, m;
	// cin >> n >> m;

	// int a[n][m];

	// for (int i = 0; i < n; i = i + 1) {

	// 	for (int j = 0; j < m; j = j + 1) {
	// 		cin >> a[i][j];
	// 	}

	// }


	// char ch[n][m];

	// for (int i = 0; i < n; i = i + 1) {

	// 	for (int j = 0; j < m; j = j + 1) {
	// 		cin >> ch[i][j];
	// 	}

	// }


	// for (int i = 0; i < n; i = i + 1) {

	// 	for (int j = 0; j < m; j = j + 1) {
	// 		cout << ch[i][j];
	// 	}
	// 	cout << endl;
	// }

	// cout << endl;

	// cout << ch[2] << endl;//This represent 3 row or a string

	// cout << ch[2][2] << endl;//Character






	int n, m;
	cin >> n >> m;

	int a[n][m];

	for (int i = 0; i < n; i = i + 1) {

		for (int j = 0; j < m; j = j + 1) {
			cin >> a[i][j];
		}

	}

	cout << a << endl;

	cout << &(a[0][0]) << endl;

	cout << (a + 1) << endl;

	cout << &(a[1][2]) << endl;

	cout << (*(a + 1) + 2) << endl;

	cout << ((a + 1) + 2) << endl;

	cout << *(a + 1) << endl;//This is also a Address

	cout << &(a[1][0]) << endl;

	cout << *((*(a + 1)) + 2) << endl;

	cout << *(a[1] + 2) << endl;
	cout << a[1][2] << endl;


// 140702011266896
// 140702011266908





}