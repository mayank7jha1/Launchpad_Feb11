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
	int pre2[n + 1] = {0};

	pre[0] = a[0];

	for (int i = 1; i < n; i = i + 1) {
		pre[i] = pre[i - 1] * a[i];
	}

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << pre[i] << " ";
	// }

	// cout << endl;

	pre2[0] = 1;

	for (int i = 1; i < n; i = i + 1) {
		pre2[i] = pre2[i - 1] * a[i - 1];
	}

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << pre2[i] << " ";
	// }

	// cout << endl;

	int suffix[n + 1] = {0};
	int suffix2[n + 1] = {0};
	suffix[n - 1] = a[n - 1];

	for (int i = n - 2; i >= 0; i = i - 1) {
		suffix[i] = suffix[i + 1] * a[i];
	}

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << suffix[i] << " ";
	// }

	// cout << endl;

	suffix2[n - 1] = 1;
	for (int i = n - 2; i >= 0; i = i - 1) {
		suffix2[i] = suffix2[i + 1] * a[i + 1];
	}

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << suffix2[i] << " ";
	// }

	// cout << endl;

	int Product[n + 1] = {0};

	for (int i = 0; i < n; i = i + 1) {
		Product[i] = pre2[i] * suffix2[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << Product[i] << " ";
	}
}












