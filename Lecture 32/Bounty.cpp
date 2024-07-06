#include<iostream>
using  namespace std;
#define int long long

//x^y:
int F(int x, int y) {

	if (y == 0) {
		return 1;
	}
	int Smallans = F(x, y / 2);

	if (y % 2 == 1) {
		return Smallans * Smallans * x;
	}
	return Smallans * Smallans;
}

int32_t main() {

	int n;
	cin >> n;

	int Part1 = 9 * F(10, n - 1);
	int Part2 = F(9, n);
	int Part3 = (n - 1) * F(9, n - 1);

	cout << Part1 - Part2 - Part3 << endl;
}







