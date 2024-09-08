#include<iostream>
using  namespace std;
const int N = 2e5 + 10;

int n, limit;
int a[N];
int freq[101] {0};

void Solve() {
	int tt = 0;
	for (int i = 0; i < n; i++) {
		int et = tt - limit + a[i];
		int sr = 0;

		if (et > 0) {

			//Frequency  Array par utla iterate.
			for (int j = 100; j > 0; j--) {

				int contribution = freq[j] * j;
				if (contribution >= et) {
					sr = sr + ((et + j - 1) / j);
					break;
				}

				sr = sr + freq[j];
				et = et - contribution;
			}
		}

		tt = tt + a[i];
		cout << sr << " ";
		freq[a[i]] = freq[a[i]] + 1;
	}
}

int main() {
	cin >> n >> limit;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	Solve();
}



