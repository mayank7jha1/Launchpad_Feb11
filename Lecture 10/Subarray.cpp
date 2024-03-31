#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n] = {0};

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << a[i] << " ";
	// }

	for (int i = 0; i < n; i = i + 1) {

		for (int j = i; j < n; j = j + 1) {

			//Task Is to Print current  subarray
			// from i to j Index.

			for (int k = i; k <= j; k = k + 1) {
				cout << a[k] << " ";
			}

			//This Means you have finished Printing the current
			//Subarray.

			cout << endl;
		}
		cout << endl;
	}

}



