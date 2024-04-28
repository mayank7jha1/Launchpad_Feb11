#include<iostream>
using  namespace std;
#define int long long

int32_t main() {

	int n, m;
	cin >> n >> m;

	int ans = 0;//The total days.

	if (m >= n) {
		cout << n << endl;
		return 0;
	}

	//n>m

	/*
		We are Solving the equation:

		(n-m)<=k*(k+1)/2;

		In range from 0 --- 10^12;

	*/

	int s = 0;
	int e = 1e10;
	int target = n - m;

	while (s <= e) {

		int mid = (s + e) / 2;

		int Value = (mid * (mid + 1)) / 2;

		if (Value >= target) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}

	}

	cout << ans + m << endl;


}