#include<iostream>
using  namespace std;


//Pass By Addrress:

//Arrays are always by default passed by address/reference.

// void Solve(int *x) {
// 	cout << x << endl;
// 	cout << x + 1 << endl;

// 	cout << *(x + 1) << endl;
// 	cout << x[1] << endl;

// 	x[1] = 98;

// 	cout << x[1] << endl;
// }

void Solve2(int* b) {

	*b = 95;

	cout << *b << endl;
}


//Pass By Reference: By Making a Variable/Container Reference variable
void Solve3(int &p) {

	p = 35;

	cout << p << endl;

}


int main() {

	// int a[] = {1, 2, 3, 4, 5};

	// cout << a << endl;
	// cout << a + 1 << endl;

	// cout << *(a + 1) << endl;
	// cout << a[1] << endl;
	// cout << a + 2 << endl;

	/*

		*: Multiplication
		*: Value of a Address
		*: To define a Pointer Variable.

		[]: Value of

		&: Address of Operator

		& Reference : Alias:



	*/



	int x = 10;

	// cout << &x << endl;

	// int* t = &x;
	// cout << t << endl;

	cout << x << endl;
	Solve2(&x);
	cout << x << endl;

	Solve3(x);

	cout << x << endl;

	// cout << a << endl;
	// Solve(a);

	//cout << a[1] << endl;


}