#include<iostream>
#include<string>
using  namespace std;

int main() {

	int x;
	string st;

	//cin >> st;
	//cout << st << endl;

	//cin.get()
	// cin.getline()
	//getline()

	// getline(cin, st, '.');
	getline(cin, st);
	cout << st << endl;

	// character length()
	// strlen(ch)--->Length of CHaracter array.
	//character array always end with a null character

	// .length(): Length of string

	int n = st.length();

	// for (int i = 0; i < n; i++) {
	// 	cout << st[i] << " ";
	// }

	// cout << endl;

	// cout << st[5] << endl;


	// .push_back()
	st.push_back('y');
	cout << st << endl;

	st.pop_back();

	cout << st << endl;

	cout << st.front() << endl;
	cout << st.back() << endl;

	cout << st[0] << endl;
	cout << st[n - 1] << endl;

	cout << st[st.length() - 1] << endl;

	//+ is overloaded: Operator Overloading

	//Concatination
	st =  "May" + st ;
	st = st + 'z';

	string str = st;

	cout << st << endl;


	//Functions: Comparators.


}



























