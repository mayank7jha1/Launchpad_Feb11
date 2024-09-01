#include<iostream>
using  namespace std;



/*
    Since We are Always considering character before for comparison.

    F(i,j):Min Steps to convert s1 from 0 index to i-1 index to
    string 2 s2 that goes from 0 to j-1 index.

    F(0,j): Min Steps to convert s1 from -1 index to 0 index to
    string 2 s2 that goes from 0 to j-1 index.

    length of string tthat goes from 0 to j-1. [j-1-0+1]=j
*/

class Solution {
public:
    int minDistance(string s, string p) {

        int dp[502][502];

        int n = s.length();
        int m = p.length();

        for (int i = 0; i <= n; i = i + 1) {
            for (int j = 0; j <= m; j = j + 1) {

                if (i == 0) {

                    //Dp me dp[0][j]: Iska matlab kya hain?

                    //F(0,j):
                    dp[i][j] = j;
                } else  if (j == 0) {

                    dp[i][j] = i;

                } else if (s[i - 1] == p[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {

                    dp[i][j] = 1 +
                               min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
                }
            }
        }
        return dp[n][m];
    }
};


int main() {

}

