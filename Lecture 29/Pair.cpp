#include<iostream>
#include<climits>
#include<algorithm>
using  namespace std;
int target;
// #define int long long

int Solve1(int a, int b) {

	if (a > target or b > target) {
		return 1e7;
	}
	if (a == target or b == target) {
		return 0;
	}

	int Op1 = 1 + Solve1(a + b, b);

	int Op2 = 1 + Solve1(a, a + b);

	//cout << Op1 << " " << Op2 << endl;
	int ans = min(Op1, Op2);
	return ans;
}

int32_t main() {
	cin >> target;
	//cout << target << endl;

	int Minstep = Solve1(1, 1);

	cout << Minstep << endl;
}