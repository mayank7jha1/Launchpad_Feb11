#include<iostream>
#include<set>
#include<unordered_set>
using  namespace std;

int main() {
	set<string>s;
	unordered_set<string>us;

	int n;
	cin >> n;
	for (int i = 0; i < n; i = i + 1) {
		string x;
		cin >> x;
		s.insert(x);
		us.insert(x);
	}

	for (set<string>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << endl;
	}

	cout << endl;
	for (string x : s) {
		cout << x << endl;
	}


	if (s.find("Mayank") != s.end()) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	if (s.count("Mayank") == 1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	//Log(n)
	// set<string>::iterator it = s.find("Mayank");
	// s.erase(it);


	// cout << endl;
	// for (string x : s) {
	// 	cout << x << endl;
	//}

	set<string>::iterator it = s.upper_bound("Mayank");
	cout << *it << endl;
}