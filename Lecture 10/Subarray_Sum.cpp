#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Given a Single Query Print sum of [l,r]
	int l, r;
	cin >> l >> r;

	int sum = 0;
	for (int i = l; i <= r; i = i + 1) {
		sum = sum + a[i];
	}

	cout << sum << endl;
}