#include<iostream>
using  namespace std;

int main() {

	// int x = 67.5;
	// cout << x << endl;

	int t;
	cin >> t;
	int i = 1;
	while (i <= t) {

		int n;
		cin >> n;//n=675
		int sum = 0;

		if (n == 0) {
			sum = 6;
		}

		while (n > 0) {

			int digit = n % 10;
			int candle = 0;


			if (digit == 0) {
				candle = 6;
			} else if (digit == 1) {
				candle = 2;
			} else if (digit == 2) {
				candle = 5;
			} else if (digit == 3) {
				candle = 5;
			} else if (digit == 4) {
				candle = 4;
			} else if (digit == 5) {
				candle = 5;
			} else if (digit == 6) {
				candle = 6;
			} else if (digit == 7) {
				candle = 3;
			} else if (digit == 8) {
				candle = 7;
			} else if (digit == 9) {
				candle = 6;
			}

			sum = sum + candle;

			n = n / 10;
		}

		// cout << sum << endl;

		if (sum % 2 == 0) {

			int value = sum / 2;

			int i = 1;
			while (i <= value) {

				cout << 1;
				i = i + 1;
			}

		} else {

			int value = sum / 2;
			cout << 7;

			int i = 1;
			while (i <= value) {

				cout << 1;
				i = i + 1;
			}


		}
		cout << endl;


		i = i + 1;
	}

}








