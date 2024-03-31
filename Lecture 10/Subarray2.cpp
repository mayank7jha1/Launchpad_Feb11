#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n] = {0};

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}
	int count = 0;

	int ans = INT_MIN;

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << a[i] << " ";
	// }

	for (int i = 0; i < n; i = i + 1) {

		for (int j = i; j < n; j = j + 1) {

			//Task Is to Calculate current  subarray
			// sum from i to j Index.
			//count = count + 1;
			int sum = 0;
			// int count = 0;
			for (int k = i; k <= j; k = k + 1) {
				sum = sum + a[k];
				//count = count + 1;
			}

			//This Means you have finished Printing the current
			//Subarray.
			// cout << sum;
			//count = count + 1;
			if (sum > ans) {
				//count = count + 1;
				ans = sum;
			}
			//cout << endl;
		}
		//cout << endl;
	}
	//cout << count << endl;
	cout << ans << endl;

}



