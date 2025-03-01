#include<iostream>
using  namespace std;
#define int long long
const int N = 1e5 + 3;
int map[N];

int32_t main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		map[x] = i + 1;
	}

	int m;
	cin >> m;
	int sum1 = 0, sum2 = 0;

	while (m--) {
		int q;
		cin >> q;

		sum1 += map[q];
		sum2 += (n - map[q] + 1);
	}

	cout << sum1 << " " << sum2 << endl;

}








