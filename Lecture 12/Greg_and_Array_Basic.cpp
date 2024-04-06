#include<iostream>
using  namespace std;


int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int a[n + 1] = {0};
	// int a[100005] = {0};

	for (int i = 1; i <= n; i = i + 1) {
		cin >> a[i];
	}

	int l[m + 1], r[m + 1], d[m + 1];

	for (int i = 1; i <= m; i = i + 1) {
		cin >> l[i] >> r[i] >> d[i];
	}
	int count = 0;
	for (int i = 1; i <= k; i = i + 1) {
		int x, y;
		cin >> x >> y;

		for (int j = x; j <= y; j = j + 1) {

			//Now You will Perform Operation.

			for (int o = l[j]; o <= r[j]; o = o + 1) {
				count = count + 1;
				a[o] = a[o] + d[j];
			}
		}
	}

	for (int i = 1; i <= n; i = i + 1) {
		cout << a[i] << " ";
	}

	cout << endl << count << endl;

}