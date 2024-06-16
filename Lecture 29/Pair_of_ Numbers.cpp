#include<iostream>
using  namespace std;
int target;

int Solve1(int a, int b) {

	if (a > target or b > target) {
		return INT_MAX;
	}

	if (a == target or b == target) {
		return 0;
	}

	int Op1 = 1 + Solve1(a + b, b);

	int Op2 = 1 + Solve1(a, a + b);

	int ans = min(Op1, Op2);
	return ans;
}

int main() {
	cin >> target;

	int Minstep = Solve1(1, 1);

	cout << Minstep << endl;
}