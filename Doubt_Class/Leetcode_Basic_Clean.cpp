#include<iostream>
#include<vector>
using  namespace std;

int Solve(int a[], int n) {
	int ans = -1;

	for (int x = 1; x <= n; x = x + 1) {

		int count = 0;

		for (int j = 0; j < n; j = j + 1) {
			if (a[j] >= x) {
				count = count + 1;
			}
		}
		if (x == count) {
			ans = x;
			// break;
			return ans;
		}

	}
	return ans;
	// cout << ans << endl;
}


int Solve2(vector<int>&a) {
	int n = a.size();
	int ans = -1;

	for (int x = 1; x <= n; x = x + 1) {

		int count = 0;

		for (int j = 0; j < n; j = j + 1) {
			if (a[j] >= x) {
				count = count + 1;
			}
		}
		if (x == count) {
			ans = x;
			// break;
			return ans;
		}

	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	//int a[n];
	vector<int>a(n);

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//int p = Solve(a, n);

	//cout << p << endl;

	int p = Solve2(a);
	cout << p << endl;

}