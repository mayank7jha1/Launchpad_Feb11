#include<iostream>
//This is Solution for two problems : Peak Index in a Mountain Array and Peak Element in Leetcode.
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Basic Way: Search for the first index that
	//has the condition of a[i]>a[i+1] and
	//a[i]>a[i-1] where i range from 0 to n-1
	//index.

	int ans = -1;

	for (int i = 1; i < n; i = i + 1) {

		if (a[i] > a[i + 1]) {
			/*
				if you come in this box
				that means you have found the
				first element satisfying the condition.

			*/

			ans = i;
			break;
		}

	}

	cout << ans << " " << a[ans] << endl;


	//Optimised Approach:

	//Define the Search Space:

	int s = 0, e = n - 1;
	int ans2 = -1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (mid == n - 1 or a[mid] > a[mid + 1]) {

			ans2 = mid;
			e = mid - 1;

		} else {

			/*
				If you are here that means
				either a[mid]==a[mid+1] which
				can never happen in this question
				or a[mid]<a[mid+1] in this
				storing mid as it can never be
				your peak element.

			*/

			s = mid + 1;

		}

	}

	cout << ans2 << " " << a[ans2] << endl;

}
