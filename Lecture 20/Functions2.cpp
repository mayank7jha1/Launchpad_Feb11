#include<iostream>
using  namespace std;

// int Sum(int a, int b) {

// 	int ans = a + b;
// 	return ans;

// }

// //Function Overloading: Type 1: No of Arguments are different
// int Sum(int a, int b, int c) {

// 	int ans = a + b + c;
// 	return ans;
// }

// //Function Overloading: Type 2: Type of Arguments are different
// int Sum(int a, double b) {

// 	int ans = a + b;
// 	return ans;
// }

//This will result in error and not work as
//Function Overloading
// double Sum(int a, double b) {

// 	double ans = a + b;
// 	return ans;
// }

int Sum(int a = 0, int b = 0, int c = 0) {

	int ans = a + b + c;
	return ans;
}



// int Sum(int a, int b) {
// 	int ans = a + b;
// 	return ans;
// }


// int Sum(int x) {
// 	cout << x << endl;
// 	return x;
// }




int main() {
	// int x = Sum(10, 5);//Function Call
	// cout << x << endl;

	// //Standing here.

	// cout << Sum(3, 5) << endl;

	// cout << Sum(4, 7, 9) << endl;
	// int y = Sum(1, 2, 9);

	// cout << y << endl;

	// cout << Sum(5, 9.7) << endl;


	cout << Sum(4, 5) << endl;

	cout << Sum(5) << endl;

	return 1.3;
}





