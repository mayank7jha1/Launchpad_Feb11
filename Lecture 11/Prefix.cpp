#include<iostream>
using  namespace std;


int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int pre[n + 1] = {0};

	pre[0] = a[0];

	for (int i = 1; i < n; i = i + 1) {
		pre[i] = pre[i - 1] + a[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << pre[i] << " ";
	}
	cout << endl;


	int k;
	cin >> k;

	for (int i = 1; i <= k; i = i + 1) {
		int l, r;
		cin >> l >> r;
		// int sum = 0;
		// for (int j = l; j <= r; j = j + 1) {
		// 	sum = sum + a[j];
		// }

		// cout << sum << endl;

		if (l == 0) {
			cout << pre[r] << endl;
		} else {
			cout << pre[r] - pre[l - 1] << endl;
		}
	}
}