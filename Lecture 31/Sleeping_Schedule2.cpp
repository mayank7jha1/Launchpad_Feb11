#include<iostream>
using  namespace std;
const int N = 2005;
int n, h, l, r;
int a[N];

int Solve(int index, int Waking_Hour) {

	if (index == n) {
		return 0;
	}

	int x = (Waking_Hour + a[index]) % h;
	int y = (Waking_Hour + a[index] - 1) % h;


	int ans1 = 0, ans2 = 0;
	if (x >= l and x <= r) {
		ans1 = 1;
	}
	if (y >= l and y <= r) {
		ans2 = 1;
	}

	int Op1 = ans1 + Solve(index + 1, x);
	int Op2 = ans2 + Solve(index + 1, y);

	return max(Op1, Op2);

}



int main() {
	cin >> n >> h >> l >> r;

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int ans = Solve(0, 0);
	cout << ans << endl;
}
