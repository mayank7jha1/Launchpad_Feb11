#include<iostream>
using  namespace std;


int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//We want to build the difference array.
	int diff[n + 1] = {0};

	int k;
	cin >> k;

	for (int i = 1; i <= k; i = i + 1) {
		int l, r, x;
		cin >> l >> r >> x;

		diff[r + 1] = diff[r + 1] - x;
		diff[l] = diff[l] + x;

	}

	//Now we want to take prefix of this
	//difference array.
	// diff[0] = diff[0];

	for (int i = 1; i < n; i = i + 1) {
		diff[i] = diff[i - 1] + diff[i];
	}

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << diff[i] << " ";
	// }

	// cout << endl;

	for (int i = 0; i < n; i = i + 1) {
		a[i] = a[i] + diff[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}
}