#include<iostream>
using  namespace std;

int x, y;

//Function Prototype:
int Sum();

//Aplication: Where do we use this.
//Overloading.
//Function Calling Another function.

int main() {

	int x = 40;
	cin >> x >> y;


	cout << Sum() << endl;//Function Call

	cout << "Value of x is " << x << endl;
	cout << x << " " << y << endl;
}


//Function Definition
int Sum() {
	x = x + 45;
	cout << "Value of x is " << x << endl;
	return x + y;
}




