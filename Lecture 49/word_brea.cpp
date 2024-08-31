#include<iostream>
#include<unordered_set>
#include<iterator>
#include<algorithm>
#include<vector>
#include<string>
#include<bits/stdc++.h>

using  namespace std;

//Iterative Approach:
//dp[0]=1;



class Solution {
public:

	bool Solve(int start, string &s, unordered_set<string>&us, int *dp) {

		if (start == s.length()) {
			return true;
		}

		if (dp[start] != -1) {
			return dp[start];
		}

		for (int j = start; j < s.length(); j = j + 1) {
			string Your_word = s.substr(start, j - start + 1);

			if (us.count(Your_word) == 1 and
			        Solve(j + 1, s, us, dp) == 1) {
				return dp[start] = 1;
			}
		}

		return dp[start] = 0;
	}

	bool wordBreak(string s, vector<string>& dic) {
		unordered_set<string>us(dic.begin(), dic.end());
		int dp[310];
		memset(dp, -1, sizeof(dp));
		return Solve(0, s, us, dp);
	}
};



int main() {

}