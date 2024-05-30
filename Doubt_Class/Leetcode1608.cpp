#include<iostream>
using  namespace std;

class Solution {
public:
	int specialArray(vector<int>& a) {
		int n = a.size();
		//O(n) O(n)
		vector<int>freq(n + 1, 0);

		//Build the Freq array.
		for (int i = 0; i < n; i++) {
			freq[min(a[i], n)]++;
		}

		int GreaterValue = 0;

		for (int i = n; i >= 1; i--) {
			GreaterValue += freq[i];
			if (i == GreaterValue) {
				return i;
			}
		}

		// int suffix[n + 1] = {0};


		return -1;
	}
};


class Solution {

	// int getFirstGreaterOrEqual(vector<int>& nums, int val) {
	// 	int start = 0;
	// 	int end = nums.size() - 1;
	// 	int n = nums.size();
	// 	int index = n;

	// 	while (start <= end) {
	// 		int mid = (start + end) / 2;

	// 		if (nums[mid] >= val) {
	// 			index = mid;
	// 			end = mid - 1;
	// 		} else {
	// 			start = mid + 1;
	// 		}
	// 	}

	// 	return index;
	// }

public:
	//O(nlogn) O(1)
	int specialArray(vector<int>& nums) {
		sort(nums.begin(), nums.end());

		int N = nums.size();
		for (int x = 1; x <= N; x = x + 1) {
			// int k = getFirstGreaterOrEqual(nums, i);
			int k = lower_bound(nums.begin(), nums.end(), x) - nums.begin();

			if (N - k == x) {
				return x;
			}
		}

		return -1;
	}
};


int main() {

}