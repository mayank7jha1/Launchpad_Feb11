#include<iostream>
using  namespace std;

//Function Definition:

//Pass By Value:You are Passing Arguments as
//value i.e You are just sending the values.

//Global Scope:
int x, y;

int Sum() {
	x = x + 45;
	cout << "Value of x is " << x << endl;
	return x + y;//Since Return Type was int we are returning a int
}

int main() {

	int x = 40;
	cin >> x >> y;


	cout << Sum() << endl; //Function Call
	//Arguments: Two Arguments are there
	//value of x and y.

	cout << "Value of x is " << x << endl;
	cout << x << " " << y << endl;
}





