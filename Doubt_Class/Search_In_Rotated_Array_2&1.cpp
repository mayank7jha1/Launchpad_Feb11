class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();

        // 1. define the bounds of the search space, target, if present, can be found in [0, n-1]

        int s = 0;
        int e = n - 1;

        while (s <= e) {

            int m = s + (e - s) / 2;

            if (nums[m] == target) {

                // you've found the target at index 'm'

                return true;

            } else {

                // identify the 'plane' in which nums[m] lies ? plane 1 or plane 2

                // plane 1 = {nums[k], nums[k+1], ..., nums[n-1]}

                // plane 2 = {nums[0], nums[1], ..., nums[k-1]}

                if (nums[m] > nums[s]) {

                    // nums[m] lies in plane 1 i.e. {nums[k], nums[k+1], ..., nums[n-1]}

                    if (target < nums[m] and target >= nums[s]) {

                        // target, if present, can be found in {nums[s], ...., nums[m-1]}

                        // therefore, reduce the search space from [s, e] to [s, m-1]

                        e = m - 1;

                    } else {

                        // target, if present, can be found in {nums[m+1], ..., nums[e]}

                        // therefore, reduce the search space from [s, e] to [m+1, e]

                        s = m + 1;

                    }


                } else if (nums[m] < nums[e]) {

                    // nums[m] lies in plane 2 i.e. {nums[0], nums[1], ..., nums[k-1]}

                    if (target > nums[m] and target <= nums[e]) {

                        // target, if present, can be found in {nums[m+1], ..., nums[e]}

                        // therefore, reduce the search space from [s, e] to [m+1, e]

                        s = m + 1;

                    } else {

                        // target, if present, can be found in {nums[s], ..., nums[m-1]}

                        // reduce the search space from [s, e] to [s, m-1]

                        e = m - 1;

                    }

                } else {

                    // nums[m] can lie in either plane 1 or plane 2

                    if (nums[m] == nums[s]) s = s + 1;
                    if (nums[m] == nums[e]) e = e - 1;

                }

            }

        }

        // target is not present in nums[]

        return false;

    }
};