#include<iostream>
using  namespace std;

int main() {
	/*
		Row Sum,Column Sum
		Target
	*/

	int n, m;
	cin >> n >> m;

	int a[n][m];

	for (int i = 0; i < n; i = i + 1) {

		for (int j = 0; j < m; j = j + 1) {
			cin >> a[i][j];
		}

	}


	//Row Sum:
	//i --->Represents Row
	//j--->Represents Column
	for (int i = 0; i < n; i = i + 1) {
		int sum = 0;

		for (int j = 0; j < m; j = j + 1) {
			sum = sum + a[i][j];
		}

		cout << sum << endl;
	}

	/*
		Preassumption: KI both row
		and column has the same size

	*/

	//Column Sum:
	//i --->Represents Row
	//j--->Represents Column
	for (int i = 0; i < n; i = i + 1) {
		int sum = 0;

		for (int j = 0; j < m; j = j + 1) {
			sum = sum + a[j][i];
		}

		cout << sum << endl;
	}

	//i --->Represents Column
	//j--->Represents Row

	for (int i = 0; i < m; i = i + 1) {

		int sum = 0;

		for (int j = 0; j < n; j = j + 1) {

			sum = sum + a[j][i];
			cout << a[j][i] << " ";

		}

		cout << endl;

		//cout << sum << endl;
	}

	int target;
	cin >> target;

	int flag = 0;

	//Linear Search:
	//i --->Represents Row
	//j--->Represents Column

	for (int i = 0; i < n; i = i + 1) {

		for (int j = 0; j < m; j = j + 1) {

			if (a[i][j] == target) {
				flag = 1;
				break;
				// return 0;
			}
		}

		if (flag == 1) {
			break;
		}
	}


	if (flag == 1) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}



}














