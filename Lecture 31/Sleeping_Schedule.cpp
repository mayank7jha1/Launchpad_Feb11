#include<iostream>
using  namespace std;
const int N = 2005;
int n, h, l, r;
int a[N];

int Solve(int index, int Waking_Hour) {

	if (index == n) {
		return 0;
	}


	//Currently We are at the index number sleep.
	//Agar main a[i] par sone gaya
	//Next day ka waking time hain agar main a[i] par
	///sone jaata hu.
	int x = (Waking_Hour + a[index]) % h;

	//Next Day ka Waking Time agar main a[i]-1 par
	//sone jaat hu.
	int y = (Waking_Hour + a[index] - 1) % h;


	//Ans1 batata hain ki agar main a[i] par sone gaya
	//toh vo good sleep thi ki nahi.
	//Ans2 batata ki agar main a[i]-1 par sone gaya
	//toh vo good sleep thi ki nahi.
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
}
