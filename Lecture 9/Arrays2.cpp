#include<iostream>
using  namespace std;

int main() {

	int a[] {10, 12, 13, 14, 15};

	cout << a[0] << " " << a[1] << " " << a[2] << " " <<
	     a[3] << " " << a[4] << endl;

	cout << endl;

	//Main Ek loop se a+0 se a+4 tak array
	//ko print karna chahta hu.

	int i = 0;

	// while (i <= 4) {

	// 	//a+i address par jo value hain
	// 	//usko print kardo.

	// 	cout << a[i] << " ";

	// 	i = i + 1;
	// }

	while (i < 5) {

		//a+i address par jo value hain
		//usko print kardo.

		cout << a[i] << " ";

		i = i + 1;
	}

	cout << endl << endl;

	for (int i = 0; i < 5; i = i + 1) {
		cout << a[i] << " ";
	}




}









