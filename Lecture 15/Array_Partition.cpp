#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i = i + 1) {

		int Min_Index = i;

		for (int j = i + 1; j < n; j = j + 1) {

			if (a[j] < a[Min_Index]) {
				Min_Index = j;
			}
		}

		if (Min_Index != i) {
			int temp = a[Min_Index];
			a[Min_Index] = a[i];
			a[i] = temp;
		}

	}

	int sum = 0;
	for (int i = 0; i < n; i = i + 2) {
		sum = sum + a[i];
	}

	cout << sum << endl;
}