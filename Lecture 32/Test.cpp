#include<iostream>
using  namespace std;
#define int long long

int x;

//~Log(y)

int F(int y) {
	if (y == 0) {
		return 1;
	}
	int Smallans = F(y / 2);
	if (y % 2 == 1) {
		return Smallans * Smallans * x;
	}
	return Smallans * Smallans;
}

int32_t main() {
	int y;
	cin >> x >> y;
	cout << F(y) << endl;
}







