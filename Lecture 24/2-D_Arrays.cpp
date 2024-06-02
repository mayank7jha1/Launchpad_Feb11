#include<iostream>
using  namespace std;


/*

	2-D Static Arrays
	2-Dynamic Array
	Vector - 2-D vector of vector
	vector of array.
*/

// const int m = 34;

void Solve(int (*a)[100], int n, int m) {

	for (int i = 0; i < n; i = i + 1) {
		for (int j = 0; j < m; j = j + 1) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}


int main() {
	int n, m;
	cin >> n >> m;

	int a[n][m];//Static 2-d Array

	for (int i = 0; i < n; i = i + 1) {
		for (int j = 0; j < m; j = j + 1) {
			cin >> a[i][j];
		}
	}

	int b[][5] = {{1, 2, 3}, {2, 2, 3}, {1, 1, 1, 1}, {22, 2, 21}};

	//Solve(a, n, m);

	cout << a << endl;
	cout << (a + 1) << endl;
	cout << *(a + 1) << endl;

	cout << *(*(a + 1) + 3) << endl;

	cout << a[1][3] << endl;


}









