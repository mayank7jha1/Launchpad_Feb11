#include<iostream>
using  namespace std;

int main() {

	//int m = 35.7;
	//int m{35.7};//narrow conversion of data
	//cout << m << endl;


	int y = 100;//Copy Assignment Initialisation

	int x{10};//Direct List Initialisation
	int z = {300};//Copy List Initialisation


	//int a[5] {7, 9, 1, 2, 5};//Direct List Initialisation

	int b[5] = {4, 5, 6, 7, 8}; //Copy List Initilisation


	//a+0: Address of base bucket or first bucket.
	//Now I Want value at this bucket.
	//[] ---> Value of Operator. This helps you fetch
	//value at the address using index as argument.
	// a[2] ====> a.operator[](2);


	int a[] {2, 3, 5, 6, 7, 8, 9};

	// int a[5] {10, 20};

	// int c[10]{0};
	// int d[10]{};


	// int e[5];




	cout << a[0] << " " << a[1] << " " << a[2] << " " <<
	     a[3] << " " << a[4] << endl;



	// int p; uninitialised Varriables
	int p{};
	cout << p << endl;


}








