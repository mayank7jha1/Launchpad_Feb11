#include<iostream>
using  namespace std;

int main() {

	int t;
	cin >> t;

	int i = 1;

	while (i <= t) {

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

		i = i + 1;
	}

}


