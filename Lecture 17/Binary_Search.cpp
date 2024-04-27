#include<iostream>
using  namespace std;

int main() {
	int n, key;
	cin >> n >> key;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Linear Search:
	int flag = 0;

	//I Have Initialised it with a value
	//that can become a answer.
	int ans = n;


	for (int i = 0; i < n; i = i + 1) {

		if (a[i] == key) {
			//I Don't need flag here, I am just
			//doing it for visualisation only.
			flag = 1;

			ans = i;
			break;
		}

	}

	//If I don't have I can compare using ans.

	// if (flag == 0) {
	// 	cout << "No Found" << endl;
	// } else {
	// 	cout << "Found" << endl;
	// }

	cout << ans << endl;



	//Binary Search:

	// Step 1: Define My Search Space

	int s = 0, e = n - 1;

	//Until you are inside your search space
	//Find mid and based upon the condintion shrink
	//your search space.

	int ans2 = n;

	while (s <= e) {

		int mid = (s + e) / 2;

		//2. int mid=(s+(e-s)/2); This is for overflow.
		//3. int mid=(e-(e-s)/2); This is for overflow.

		if (a[mid] == key) {
			ans2 = mid;
			break;

		} else if (a[mid] > key) {

			e = mid - 1;

		} else {

			s = mid + 1;

		}

	}


	cout << ans2 << endl;

}









