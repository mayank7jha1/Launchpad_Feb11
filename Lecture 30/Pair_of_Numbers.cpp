#include<iostream>
#include<climits>

using  namespace std;
int ans = INT_MAX; //Global Variable
//Min steps across all the paths.



//F(a,b,count): steps to Reach 1,1 from
//(a,b) in the current path is count.

void F(int a, int b, int count) {

	if (a == 1 and b == 1) {
		ans = min(count, ans);
		return;
	}
	if (a - b > 0) {
		return F(a - b, b, count + 1);
	}

	if (b - a > 0) {
		return F(a, b - a, count + 1);
	}
}


void Solve(int target) {
	for (int i = 1; i <= target - 1; i = i + 1) {
		//(i,target-i)
		F(i, target - i, 1);
	}
}




int main() {
	int target;
	cin >> target;

	Solve(target);

	cout << ans << endl;
}




