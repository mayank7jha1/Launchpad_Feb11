#include<iostream>
#include<algorithm>
using  namespace std;

// namespace Mayank {
// //Code: Binary Search cout
// };

// binary_Sear

// Mayank::binary_Search




int main() {

	/*
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int x;
		cin >> x;


		//STL:
		//Binary Search STL Will Return a
		//boolean Value that is true or false.
		cout << binary_search(a + 0, a + n, x) << endl;
		bool ans = binary_search(a + 0, a + n, x);
		cout << ans << endl;

	*/


	// Upper_Bound: First Element that is Greater than x.
	//Lower_Bound: First Element that is Greater than equal to x.

	/*

		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int x;
		cin >> x;

		//This Function Returns a Address.
		//cout << a + 7 << endl;
		cout << (upper_bound(a, a + n, x)) << endl;
		cout << *(upper_bound(a, a + n, x)) << endl;
		int index = upper_bound(a, a + n, x) - a;

		cout << index << endl;

		int index2 = lower_bound(a, a + n, x) - a;

		cout << index2 << endl;


		cout << index - index2 << endl;//Log(n)
	*/


	//Sort:
	int n;
	std::cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	//This Doesn't Return Anything.
	std::sort(a, a + n);

	for (int i = 0; i < n; i++) {
		std::cout << a[i] << " ";
	}

	// Mayank::cout <<;

	cout << endl;

	reverse(a, a + n);

	for (int i = 0; i < n; i++) {
		std::cout << a[i] << " ";
	}




}