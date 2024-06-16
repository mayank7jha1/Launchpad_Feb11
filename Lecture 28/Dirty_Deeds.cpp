#include<iostream>
#include<vector>
using  namespace std;
#define int long long

//For representing Pair.
vector<int>first, second;


//The current pair under consideration
//for comparison is :
//(first[x],second[x])--->(first[y],second[y])

//This Comparison is a part of Sequence 1
//where we are sorting on the basis of the second
//value in the desecding order.
bool c1(int x, int y) {
	if (second[x] > second[y]) {
		return true;
	} else {
		return false;//Swap
	}
}

//This Comparison is a part of Sequence 2
//where we are sorting on the basis of the first
//value in the ascending order.
bool c2(int x, int y) {
	if (first[x] < first[y]) {
		return true;
	} else {
		return false;
	}
}


int32_t main() {
	int n;//Number of Pairs.
	cin >> n;

	vector<int>s1, s2;
	vector<int>ans;

	for (int i = 0; i < n; i = i + 1) {
		int x, y;
		cin >> x >> y;

		first.push_back(x);
		second.push_back(y);
		//My current Pair (i) will be (first[i],second[i])

		if (first[i] < second[i]) {
			s1.push_back(i);
		} else {
			s2.push_back(i);
		}
	}

	if (s1.size() > s2.size()) {
		sort(s1.begin(), s1.end(), c1);
	} else {
		sort(s2.begin(), s2.end(), c2);
	}
}