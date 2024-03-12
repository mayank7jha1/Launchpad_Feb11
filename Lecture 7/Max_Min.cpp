#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int x;

	int i = 1;
	int maxi = INT_MIN;
	int mini = INT_MAX;

	while (i <= n) {
		cin >> x;

		if (maxi < x) {
			maxi = x;
		}

		if (mini > x) {
			mini = x;
		}

		i = i + 1;
	}

	cout << maxi << " " << mini << endl;


}



