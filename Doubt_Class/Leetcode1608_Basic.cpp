#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	/*
		Logic: You need to find the value of x
			   in range [1,n] that makes the array
			   special.

	*/
	int ans = -1;//Initialised it with a value that
	//can be my answer when there exits no value of
	//x that satisfies the condition.

	for (int x = 1; x <= n; x = x + 1) {

		//Jab main yaha aaya mujhe ye dhundna hain
		//kitne number hai array me jo mere
		//current x se bade ya barabar hain.
		int count = 0;

		for (int j = 0; j < n; j = j + 1) {
			if (a[j] >= x) {
				count = count + 1;
			}
		}

		//Mujhe ab pata hain ki kitne number hain
		//jo x se bade ya barabar hain.

		//Kya jo number x se bade ya barabar hain
		//unka count is equal to x?

		if (x == count) {
			ans = x;
			break;
		}

	}

	//I Will be standing here when I have found the value
	//of x or there was no value of x satifying the equation.

	cout << ans << endl;

}