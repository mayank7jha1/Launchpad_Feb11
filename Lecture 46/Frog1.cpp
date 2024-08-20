#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
using  namespace std;
int n;
vector<int>height;
int dp[100005];

int F(int x) {

	if (x == n - 1) {
		return 0;
	}

	if (dp[x] != -1) {
		return dp[x];
	}

	int Op1 = abs(height[x] - height[x + 1]) + F(x + 1);

	int Op2 = INT_MAX;

	if (x + 2 <= n - 1) {
		Op2 = abs(height[x] - height[x + 2]) + F(x + 2);
	}

	int ans = min(Op1, Op2);
	return dp[x] = ans;
}


int main() {

	cin >> n;
	height.resize(n);

	//int height[n]={0};

	for (int i = 0; i < n; i = i + 1) {
		cin >> height[i];
	}

	memset(dp, -1, sizeof(dp));

	int ans = F(0);
	cout << ans << endl;
}





