#include<iostream>
using  namespace std;

int main() {
	//Static Variable
	// int x = 10;

	// //Dynamic Variable
	// int *p = new int(19);

	// delete p;

	// //p = new int(25);

	// cout << p << endl;

	int a[3] = {0};

	a[5];

	cout << a[14] << endl;

	int *p1 = new int[3] {1, 2, 3};

	delete []p1;

	cout << p1[2] << endl;


}