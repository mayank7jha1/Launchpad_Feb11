#include<iostream>
using  namespace std;

int main() {

	int n, target;
	cin >> n >> target;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int s = 0; int e = n - 1;
	int ans = -1;
	//This is a index that can never become my answer.


	while (s <= e) {

		int mid = (s + e) / 2;

		if (a[mid] >= target) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}

	}

	cout << ans << endl;

}