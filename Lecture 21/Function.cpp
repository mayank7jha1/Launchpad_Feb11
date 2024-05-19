#include<iostream>
using  namespace std;


/*
	Generic Programming:
	1. Functions
	2. Templates

	Function: You a block of Code i.e.
	outside the scope of main.

	Advantages:
	1.	You can Call as many times this
		block of code as you can and you don't have to
		write long codes inside main.

	2.	This is Generic Programming :
		Function Overloading
		Default Arguments

	1. Function Prototype:
		Don't want to read Large code  before main.
		When a Function is Calling Another Function.

	2. Function Definition
	3. Function Call : Driver Function(Main)

*/


/*
	Function:

	Scope:
	Name:
	Return Type: (Void : It is not returing anything,
	 int ,double,float,string,container etc.)

	Arguments: The values on which we want this block
	of code to run for this particular iteration.
		: Every Argument will have its own data type.
		: Every Argument will have its own name.


*/

/*
int Sum(int x, int y) {

	int ans = x + y;

	return ans;

	//return x + y;
}


//Function Overloading: Different block of Code have same name.
// 1. No of Arguments defer
// 2. Type of Arguments defer

int Sum(int x, int y, int t) {

	return x + y + t;
}

double Sum(int x, double y) {
	return x + y;
}


*/

//Default Arguments

//Function Prototype:

double Sum(int, int);




int main() {

	// int a, b;
	// cin >> a >> b;

	// cout << a + b << endl;

	//Function Calling
	int ans1 = Sum(10, 19); //We have passed the values of a and b in Sum Function.

	cout << ans1 << endl;

	int ans2 = Sum(13, 16.7);

	cout << ans2 << endl;

	// int ans3 = Sum(2, 5, 9);

	// cout << ans3 << endl;




}


double Sum(int x = 0, int y = 0, int z = 0, int t = 0, int e = 0) {
	return x + y + z + t + e;
}






































