#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Bubble Sort
	for (int i = 0; i < n - 1; i = i + 1) {

		for (int j = 0; j < n - i - 1; j = j + 1) {

			//Compare and Swap;

			if (a[j] > a[j + 1]) {

				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;

			}

		}

	}

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}
}