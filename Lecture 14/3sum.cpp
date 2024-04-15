#include<iostream>
using  namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i = i + 1) {

		int n;
		cin >> n;
		int a[n];

		for (int i = 0; i < n; i = i + 1) {
			cin >> a[i];
			a[i] = a[i] % 10;
		}

		//Build a Frequency Array for the digit.
		int freq[10] = {0};

		for (int i = 0; i < n; i = i + 1) {
			int digit = a[i];
			freq[digit] = freq[digit] + 1;
		}

		//Remove all the extra frequencies.

		for (int i = 0; i < 10; i = i + 1) {
			if (freq[i] > 3) {
				freq[i] = 3;
			}
		}

		//Expand My Frequency Array.
		int ex[31] = {0};
		int k = 0;

		for (int i = 0; i < 10; i = i + 1) {

			int Element = i;
			int value = freq[i];

			for (int j = 0; j < value; j = j + 1) {
				ex[k] = Element;
				k = k + 1;
			}
		}
		int flag = 0;

		for (int i = 0; i < k; i = i + 1) {

			for (int j = i + 1; j < k; j = j + 1) {

				for (int z = j + 1; z < k; z = z + 1) {

					if ((ex[i] + ex[j] + ex[z]) % 10 == 3) {
						flag = 1;
					}
				}
			}
		}

		if (flag == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}