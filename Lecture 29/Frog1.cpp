#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using  namespace std;
int n;
vector<int>height;

/*
	F(x): Min cost from xth index stone to n-1
	th index stone.

	F(x+1): Min cost from the x+1 th stone to n-1
	th stone.

	F(x+2): Min cost from the x+2 nd  Stone to n-1
	th stone.


	Option 1: Me saying I will take one step from the
	current stone.

	x is my current stone.

	Option 1: abs(height[x]-height[x+1])+F(x+1)

	Option 2: abs(height[x]-height[x+2])+F(x+2)

	int ans=min(option1,option2);
	return ans;

	F(0): Min Cost from n-1th stone to n-1th stone.


*/

int F(int x) {

	if (x == n - 1) {
		return 0;
	}

	//Initially x=0

	//When I am Taking a Single Step from the current
	//stone.
	int Op1 = abs(height[x] - height[x + 1]) + F(x + 1);


	//When I am Taking a 2 kadam Step from the current
	//stone.
	//I am Initialising this op2 with a value INT_MAX
	//because I want say never take this path answer
	//if you are not able to make that 2 step jump.
	//Since we are taking minimum we will automatically
	//ignore something that is infinity.

	int Op2 = INT_MAX;

	if (x + 2 <= n - 1) {
		Op2 = abs(height[x] - height[x + 2]) + F(x + 2);
	}


	int ans = min(Op1, Op2);

	return ans;

}


int main() {

	cin >> n;
	height.resize(n);

	//int height[n]={0};

	for (int i = 0; i < n; i = i + 1) {
		cin >> height[i];
	}

	int ans = F(0);
	cout << ans << endl;

}