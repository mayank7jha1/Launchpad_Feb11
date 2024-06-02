#include<iostream>
#include<string>
#include<algorithm>
using  namespace std;


bool compare(string a, string b) {

	//This is when any of the a,b string is a substring of another
	if (a.find(b) == 0 or b.find(a) == 0) {

		if (a.length() < b.length()) {
			return false;
		} else {
			return true;
		}
	}

	//When they are not the substring just sort them in dictionary order
	if (a < b) {
		return true;
	} else {
		return false;
	}


	// if (a.find(a) == 0 or b.find(a) == 0) {
	// 	return a.length() < b.length();
	// }

	// return a < b;



}



int main() {

	int n;
	cin >> n;
	string s[n];//This is a Array of string.

	for (int i = 0; i < n; i = i + 1) {
		cin >> s[i];
	}

	sort(s, s + n, compare);//O(nlogn)


	for (int i = 0; i < n; i = i + 1) {
		cout << s[i] << endl;
	}


	// string st = "Mayank";

	// string t = "Rahul";

	// if (st > t) {
	// 	cout << "Yo";
	// } else if (st < t) {
	// 	cout << "No" << endl;
	// } else if (st == t) {
	// 	cout << "Hi";
	// }

}