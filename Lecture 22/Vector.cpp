#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cstring>
using  namespace std;

int main() {

	int n;
	cin >> n;

	vector<int>v1;//We have defined a Vector
	vector<int>v2{2, 5, 6, 8, 9};//Vector Initialised with values 2, 5, 6, 8, 9
	vector<int>v3(n);//Vector with size n
	vector<int>v4(n, 1);//Vector with size n and initialised with value 1.


	//Every Container has its Functions.
	/*
		push_back: Element ko last me daalta hain vector ke.
		pop_back: Last Vaale element ko remove karta hain.
		sort   : Sort the vector
		reverse : Reverse The vector
		iota : Helps in initialisation
	*/

	for (int i = 0; i < n; i = i + 1) {
		// cin >> v1[i];//Will not work because you have not given the size.
		int x;
		cin >> x;
		v1.push_back(x);
	}

	for (int i = 0; i < n; i = i + 1) {
		cin >> v3[i];//This is now allowed why because v3 has a size.
	}

	for (int i = 0; i < n; i = i + 1) {
		// cin >> v3[i];//This is now allowed why because v3 has a size.
		int x;
		cin >> x;
		v4.push_back(x);

	}

	for (int i = 0; i < n; i = i + 1) {
		cout << v1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i = i + 1) {
		cout << v3[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n + n; i = i + 1) {
		cout << v4[i] << " ";
	}

	/*

		Algorithms on Vectors:

		Sort
		Reverse
		Iota
		memset

		Iterator: Return Address of the containers.
		Smallest Form of an Iterator is a Pointer.

		begin(): Returns the address of the first block
		of the container

		end(): Returns the address of the last block+1 of the
		container

	*/

	sort(v3.begin(), v3.end());
	// sort(a, a + n);

	cout << endl;
	for (int i = 0; i < n; i = i + 1) {
		cout << v3[i] << " ";
	}

	// reverse(a,a+n);
	reverse(v3.begin(), v3.end());


	cout << endl;
	for (int i = 0; i < n; i = i + 1) {
		cout << v3[i] << " ";
	}

	//This doesn't return anything
	iota(v3.begin(), v3.end(), 5);
	cout << endl;


	for (int i = 0; i < n; i = i + 1) {
		cout << v3[i] << " ";
	}





}


/*

	Vector : Dynamic Array Size Doubles when
	it become full.

*/

