#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int target;
	cin >> target;

	for (int i = 0; i < n - 1; i = i + 1) {

		for (int j = i + 1; j < n; j = j + 1) {

			if (a[i] + a[j] == target) {
				cout << a[i] << " " << a[j] << endl;
			}

		}
	}


}






