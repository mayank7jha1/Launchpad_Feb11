#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Given q Queries Print sum of [l,r];
	//Computations : q*n;

	int q;
	cin >> q;

	for (int i = 1; i <= q; i = i + 1) {
		int l, r;
		cin >> l >> r;

		int sum = 0;
		for (int j = l; j <= r; j = j + 1) {
			sum = sum + a[j];
		}

		cout << sum << endl;
	}
}


