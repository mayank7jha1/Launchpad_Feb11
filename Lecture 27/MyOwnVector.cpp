#include<iostream>
#include"Vector.h"

using  namespace std;

int main() {
	int n;
	cin >> n;
	Vector<char>v;

	// <data type>: Typename : data type

	for (int i = 0; i < n; i = i + 1) {
		char x;
		cin >> x;
		v.push_back(x);
	}

	cout << v.back() << endl;
	cout << v.front() << endl;
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.pop_back();
	cout << v.size() << endl;
	cout << v.capacity() << endl;


	for (int i = 0; i < v.size(); i = i + 1) {
		cout << v[i] << " ";
	}
}