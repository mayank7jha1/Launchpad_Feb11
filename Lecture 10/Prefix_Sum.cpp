#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int pre[n];

	//pre[i]= Sum of Subarray from 0 to i.

	pre[0] = a[0];

	for (int i = 1; i < n; i = i + 1) {

		// if (i == 0) {
		// 	pre[i] = a[i];
		// } else {
		// 	pre[i] = pre[i - 1] + a[i];
		// }

		pre[i] = pre[i - 1] + a[i];
	}

	for (int  i = 0; i < n; i = i + 1) {
		cout << pre[i] << " ";
	}

	cout << endl;

	int q;
	cin >> q;

	for (int i = 1; i <= q; i = i + 1) {
		int l, r;
		cin >> l >> r;

		if (l == 0) {
			cout << pre[r] << endl;
		} else {
			cout << pre[r] - pre[l - 1] << endl;
		}
	}


}