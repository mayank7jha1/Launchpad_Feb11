#include<iostream>
using  namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= t; i = i + 1) {

		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i = i + 1) {
			cin >> a[i];
		}

		int flag = 0;

		for (int i = 0; i < n - 2; i = i + 1) {

			if (flag == 1) {
				break;
			}

			for (int j = i + 1; j < n - 1; j = j + 1) {

				if (flag == 1) {
					break;
				}

				for (int k = j + 1; k < n; k = k + 1) {

					if (((a[i] + a[j] + a[k]) % 10) == 3) {

						cout << "YES" << endl;
						flag = 1;

					}

				}
			}
		}

		if (flag == 0) {
			cout << "NO" << endl;
		}

	}
}