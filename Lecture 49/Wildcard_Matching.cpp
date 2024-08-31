#include<iostream>
#include<cstring>
using  namespace std;



class Solution {
public:
    bool Solve(int i, int j, string &s, string &p, int (*dp)[2001]) {

        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        if (i == 0 and j == 0) {
            return dp[i][j] = 1;
        }

        if (j == 0 and i > 0) {
            return dp[i][j] = 0;
        }

        if (i == 0 and j > 0) {
            while (j > 0) {
                if (p[j - 1] != '*') {
                    return dp[i][j] = 0;
                }
                j = j - 1;
            }
            return dp[i][j] = 1;
        }


        if (s[i - 1] == p[j - 1] or p[j - 1] == '?') {

            return Solve(i - 1, j - 1, s, p, dp);

        } else if (p[j - 1] == '*') {

            bool Op1 = Solve(i - 1, j, s, p, dp);
            bool Op2 = Solve(i, j - 1, s, p, dp);

            return dp[i][j] = (Op1 or Op2);

        }
        return dp[i][j] = 0;
    }

    bool isMatch(string &s, string &p) {
        int n = s.length(), m = p.length();
        int dp[2001][2001];
        memset(dp, -1, sizeof(dp));
        return Solve(n, m, s, p, dp);
    }

};



class Solution {
public:
    bool isMatch(string &s, string &p) {
        int n = s.length(), m = p.length();
        int dp[2001][2001];

        dp[0][0] = 1;
        for (int i = 1; i <= n; i = i + 1) {
            dp[i][0] = 0;
        }
        bool flag = 1;
        for (int j = 1; j <= m; j = j + 1) {
            if (p[j - 1] != '*') {
                flag = 0;
            }

            dp[0][j] = flag;
        }


        for (int i = 1; i <= n; i = i + 1) {
            for (int j = 1; j <= m; j = j + 1) {
                if (s[i - 1] == p[j - 1] or p[j - 1] == '?') {
                    dp[i][j] = dp[i - 1][j - 1];
                } else if (p[j - 1] == '*') {
                    dp[i][j] = (dp[i - 1][j] or dp[i][j - 1]);
                } else {
                    dp[i][j] = 0;
                }
            }
        }

        return dp[n][m];
    }

};

int main() {
    Solution obj;

    string s, p;
    cin >> s >> p;
    //cout << s << " " << p << endl;
    cout << obj.isMatch(s, p) << endl;
}














