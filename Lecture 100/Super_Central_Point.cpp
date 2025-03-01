#include<iostream>
#include<vector>
using  namespace std;

int main() {
	int n;
	cin >> n;

	vector<int>x(n), y(n);

	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}

	int SCP = 0;

	for (int i = 0; i < n; i++) {

		int l = 0, r = 0, t = 0, b = 0;

		for (int j = 0; j < n; j++) {

			if (x[j] > x[i] and y[i] == y[j]) {
				r = 1;
			}

			if (x[j] < x[i] and y[i] == y[j]) {
				l = 1;
			}

			if (x[j] == x[i] and y[i] > y[j]) {
				t = 1;
			}

			if (x[j] == x[i] and y[i] < y[j]) {
				b = 1;
			}
		}

		if (t == 1 and b == 1 and l == 1 and r == 1) {
			SCP++;
		}
	}

	cout << SCP << endl;


}












