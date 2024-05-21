#include<iostream>
#include<vector>
using  namespace std;


int Sum(vector<int>a) {

	int ans = 0;

	for (int i = 0; i < a.size(); i = i + 1) {
		ans = ans + a[i];
	}
	return ans;
}


vector<int>Change(vector<int>b) {

	// vector<int>ans = a;
	// ans[3] = 96;

	//return ans;

	vector<int>mayank = b;
	ans[3] = 98;
	return mayank;
}

int main() {
	int n;
	cin >> n;

	//Vector Traversal

	vector<int>v;//Defining a Vector


	/*
		Three Ways you can Traverse over a Vector Container
		Last Two Ways are common across every container.

		1. Like Your arrays using for/while or any sort of loop.
		2. Using Iterators
		3. Using For Each Loop



		Using Iterators and For each loop you can iterate
		over every container except for the container
		adaptors like(stack,queue,priority queue(heaps))etc.

	*/


	//Taking Input in a vector without size.
	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		v.push_back(x);
	}



	// 1. Traverse over this vector just like your arrays.


	for (int i = 0; i < n; i = i + 1) {
		cout << v[i] << " ";
	}

	cout << endl;

	//size: Function Returns the size of the current vector
	//Capacity: Function Returns the capacity of the current vector

	cout << v.size() << endl;
	cout << v.capacity() << endl;


	//This doesn't return anything.
	v.pop_back();

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	for (int i = 0; i < v.size(); i = i + 1) {
		cout << v[i] << " ";
	}

	cout << endl;

	//2. Using Iterators:

	//Keyword auto: int x=10; auto x=10;

	//auto it = v.begin();
	// v.end();

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << (*it) << " ";
	}

	cout << endl;

	// 3. For Each Loop:
	/*
		This Loop can only be used for each and every element
		of the DS.

		//Definition:

		For Every Element of this DS that is going to be
		represented as (name of variable) do this task;

		//Below FOr each has a definition as:

		For Every Element of this vector that is going to be
		represented as x do this task;

	*/

	for (auto x : v) {
		cout << x << " ";
	}


	//Properties that are associated with every container.

	// You can directly copy a container of the same type
	// into another.

	vector<int>v1 = v; //= is overloaded and this property is know operator overloading


	//This vector<type> can be treated as return type in a function
	//can be passed as a argument in a function (For return and passing
	// these uses a principle called as pass by value)

	v1.clear();//It makes your vector empty.
	cout << endl;
	if (v1.empty() == 1) {
		cout << "Yes" << endl;
	} else {
		cout << "NO" << endl;
	}


	int ans = Sum(v);
	cout << ans << endl;

	vector<int>v = Change(v);

	//v=Change(v);

	for (auto x : ans2) {
		cout << x << " ";
	}

	cout << endl;
	for (auto x : v) {
		cout << x << " ";
	}


	// int x;
	// while (cin >> x) {
	// 	v1.push_back(x);
	// }

	// int n = v1.size();


}




