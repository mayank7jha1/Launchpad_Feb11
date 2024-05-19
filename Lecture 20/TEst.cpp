#include<iostream>
using  namespace std;

void Solve() {

	int n;
	cin >> n;

	int ans = 2000;

	int j = 1;
	cout << ans << " ";

	while (j <= n - 1) {

		int x;
		cin >> x;
		ans = ans + x;
		cout << ans << " ";

		j = j + 1;
	}

	cout << endl;

}



int main() {
	int t;
	cin >> t;

	while (t--) {

		Solve();

	}

}