#include<iostream>
using  namespace std;
#define int long long
const int N = 2e5 + 10;
int h, n;
int a[N] = {0};
int c[N] = {0};

int32_t main() {
	int t;
	cin >> t;

	int i = 1;
	while (i <= t) {
		cin >> h >> n;

		for (int i = 0; i < n; i = i + 1) {
			cin >> a[i];
		}

		for (int i = 0; i < n; i = i + 1) {
			cin >> c[i];
		}

		int s = 1, e = 1e11;
		int ans = -1;//Min turns across to defeat the boss.

		while (s <= e) {

			int mid = (s + e) / 2;

			int damage = 0;

			for (int i = 0; i < n; i = i + 1) {
				// damage += (((mid + c[i] - 1) / c[i]) * a[i]);
				damage = min(h, damage + (((mid + c[i] - 1) / c[i]) * a[i]));
			}

			//damage can overflow the long long also.

			if (damage == h) {
				e = mid - 1;
				ans = mid;
			} else {
				s = mid + 1;
			}
		}

		cout << ans << endl;

		i = i + 1;
	}
}


























