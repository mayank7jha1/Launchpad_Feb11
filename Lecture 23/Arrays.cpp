#include<iostream>
using  namespace std;

int main() {

	// int n;
	// cin >> n;

	// int a[n];//One Dimentional Array : Horizontal

	// int b[10][5];//Two Dimentional Array

	// // b[0]--->One Dimentional Array

	// //Base Address of two dimentiona array b or the address of the box at 0,0 index
	// cout << b << endl;
	// cout << &(b[0][0]) << endl;

	// /*
	// 	b--> Base Address or Represents 2-D Array

	// 	b[3]--->4th row or 3 index array(one dimentional)

	// 	b[2][1]--->Single Box or a variable

	// */


	/*
		Address:


	*/


	// int a[4] = {11, 12, 13, 14};

	// cout << a << endl;
	// cout << &a[0] << endl;
	// cout << *(&a[0]) << endl;

	// cout << *a << endl;

	// cout << *(a + 0) << endl;

	// //[]-->Overloaded: Value of
	// cout << a[0] << endl;

	// cout << a + 1 << endl;
	// cout << *(a + 1) << endl;

	// {}-->Collection of Elements

	// int b[2][3] = {11, 12, 13, 14, 15, 16};

	// // int c1[2][];

	// cout << b[0][0] << endl;
	// cout << b[0][1] << endl;
	// cout << b[0][2] << endl;

	// cout << b[1][0] << endl;
	// cout << b[1][1] << endl;
	// cout << b[1][2] << endl;

	int b[2][3] = {11, 12, 13, 14, 15, 16};

	// int c[][3] = {{33, 12}, {14, 15, 16}};


	// int d[7][5] = {{0}};

	// int e[2][7] = {};

	// int f[7][5] = {};

	// // cout << f[1][4] << endl;

	// cout << e[1][5];


	// cout << b[0][0] << endl;
	// cout << b[0][1] << endl;
	// cout << b[0][2] << endl;

	// cout << b[1][0] << endl;
	// cout << b[1][1] << endl;
	// cout << b[1][2] << endl;


	// int m[3] = {0};

	// cout << m[5] << endl;


	// b

	//Traversal : Iteration

	for (int i = 0; i < 2; i = i + 1 ) {

		for (int j = 0; j < 3; j = j + 1) {
			cout << b[i][j] << " ";
		}

		cout << endl;
	}

}








