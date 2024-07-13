class Solution {

	// int Stair(vector<int>&cost, int i, int n) {
	// 	if (i == n) {
	// 		return 0;
	// 	}

	// 	int op1 = Stair(cost, i + 1, n) + cost[i];

	// 	int op2 = INT_MAX;
	// 	if (i + 2 <= n - 1) {
	// 		op2 = Stair(cost, i + 2, n) + cost[i];
	// 	}

	// 	return min(op1, op2);
	// }

	int Stair(vector<int>&cost, int i, int n) {
		if (i >= n) {
			return 0;
		}

		int op1 = Stair(cost, i + 1, n) + cost[i];
		int op2 = Stair(cost, i + 2, n) + cost[i];


		return min(op1, op2);
	}
public:
	int minCostClimbingStairs(vector<int>& cost) {
		int  n = cost.size();

		int  Option1 = Stair(cost, 0, n);
		int Option2 = Stair(cost, 1, n);

		return min(Option1, Option2);

	}
};




