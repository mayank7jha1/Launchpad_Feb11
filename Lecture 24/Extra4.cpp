#include<iostream>
#include<vector>
using  namespace std;

const int N = 1e4;//1*10^4;
int a[N];
int* b;
vector<int>v;

/*
	Iterator: Every Container except the
	container adapter has its own iterator
	iterators are use to store and return
	addresses of the container

	why can't i just use pointers:  because
	container may be made from different
	derived data type.

	iterator to point at the first bucket of the
	container is .begin().

	iterator to point to the last bucket+1 of the
	container is .end().

	simplest form of an iterator is a pointer only.

	so when i am saying it is pointing it means
	it is storing the address of the container
	bucket.


	Container Properties: Every Container except for
	the container adapter can be passed as a argument
	can be returned from a function and can be copied directly
	using = (assignment operator)


	Every Container is passed inside a function as
	value. (Passed By value by default)

	since strings are also similar to containers
	they are also passed by value default.

*/


void sum(int *p, int &n) {

	for (int i = 0; i < n; i = i + 1) {
		cout << *(p + i) << " ";
	}
}

// void sum(int* p, int n) {
// 	for (int i = 0; i < n; i = i + 1) {
// 		cout << p[i] << " ";
// 	}
// }

// v1=v (Expensive)

//v1 is not different than v. v1 and v are same
//you are not creating a new vector v1 you are
// just saying v1 is another name of v.

void sum(vector<int>&v1) {

	int n = v1.size();

	for (int i = 0; i < n; i = i + 1) {
		cout << v1[i] << " ";
	}

	v[3] = 999;
	cout << v1[3] << endl;

}



//Pass By Reference: p is a reference variable for m.
void Solve4(string &p) {

	p[2] = 'X';

	cout << p << endl;
}

int main() {
	int n;
	cin >> n;

	b = new int[n];
	v.resize(n);

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}


	for (int i = 0; i < n; i = i + 1) {
		cin >> b[i];
	}


	for (int i = 0; i < n; i = i + 1) {
		cin >> v[i];
	}

	sum(a, n);

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << a[i] << " ";
	// }

	cout << endl;

	sum(b, n);

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << b[i] << " ";
	// }

	cout << endl;

	sum(v);

	vector<int>ans = v;

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << v[i] << " ";
	// }

	// cout << endl;

	cout << v[3] << endl;


	string m = "Mayank";
	Solve4(m);

	cout << m << endl;



}









