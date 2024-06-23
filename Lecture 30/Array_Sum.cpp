#include<iostream>
using  namespace std;


//Sum of the Array.
/*

	Solve(a,4,0):a[0]+Solve(a,4,1);

	Sum of the Arrray from 0th index to n-1th index =
	a[0]+ Sum of the array from 1st index to n-1th index.

	Solve(a,n-1,0): Sum of the Array from the 0 index to n-1 index.

	Changing Parameters: Index.
	Solve(a,n-1,1):Iska answer tumko pata hain.
	Solve(a,4,1):Sum of Array from 1st index to n-1th index.



	Solve(a,4):a[4]+Solve(a,3);

	Sum of array from 4th index to 0th index=a[4]+sum of the
	array from 3rd index to 0th index.

	Solve(a,0): Sum of array from 0th index to 0th index.
	a[0];

*/

//THis is from the Start.
int Solve(int *a, int x, int index) {

	if (index == x) {
		return a[x];
	}

	int ans = a[index] + Solve(a, x, index + 1);
	return ans;
}

//This is fromt the end.
int Solve2(int a[], int x) {

	if (x == 0) {
		return a[x];
	}

	int ans = a[x] + Solve2(a, x - 1);
	return ans;
}




int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int ans = Solve(a, n - 1, 0);

	cout << ans << endl;
}