#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using  namespace std;
int n;
vector<int>height;



//Approach 1: When You are starting from the First Stone.
int F1(int x) {

	if (x == n - 1) {
		return 0;
	}
	int Op1 = abs(height[x] - height[x + 1]) + F1(x + 1);
	int Op2 = INT_MAX;

	if (x + 2 <= n - 1) {
		Op2 = abs(height[x] - height[x + 2]) + F1(x + 2);
	}

	int ans = min(Op1, Op2);
	return ans;
}

//Approach 2: When You are starting from Last Stone.
// F(5): You are standing at the 5th stone and you have stone
// 0th stone.

//F(5):min(op1,op2);

/*

	Op1= F(4)+height[5]-height[4];

	OP2=F(3)+height[5]-height[3];



*/

int F2(int x) {

	if (x == 0) {
		return 0;
	}


	int Op1 = abs(height[x] - height[x - 1]) + F2(x - 1);
	int Op2 = INT_MAX;

	if (x - 2 >= 0) {
		Op2 = abs(height[x] - height[x - 2]) + F2(x - 2);
	}

	int ans = min(Op1, Op2);
	return ans;
}

int main() {

	cin >> n;
	height.resize(n);
	for (int i = 0; i < n; i = i + 1) {
		cin >> height[i];
	}
	int ans1 = F1(0);
	int ans2 = F2(n - 1);
	cout << ans1 << endl;
	cout << ans2 << endl;

}









