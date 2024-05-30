#include <bits/stdc++.h>
using namespace std;


int possible(int mid, vector<int>& nums) {
    int sum = 0;
    for (auto x : nums) {
        sum += ((x / mid) + (((x % mid) > 0) ? 1 : 0));
    }
    return sum;
}


int smallestDivisor(vector<int>& nums, int threshold) {
    int s = 1;
    int e = INT_MIN;
    for (auto x : nums) {
        e = max(e, x);
    }

    int ans;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        int sum = possible(mid, nums);
        if (sum <= threshold) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }

    return ans;
}
int main() {

    int n;
    cin >> n;

    vector<int>v(n);
    for (auto &a : v) {
        cin >> a;
    }

    int b;
    cin >> b;




    cout << smallestDivisor(v, b);
}
