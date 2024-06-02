#include<iostream>
#include<algorithm>
using  namespace std;

bool compare(string &a, string &b) {

	string ab = a + b;
	string ba = b + a;

	if (ab > ba) {
		return true;
	} else {
		return false;
	}
}

int main() {

	int t;
	cin >> t;

	int i = 1;
	while (i <= t) {
		int n;
		cin >> n;

		string s[n];
		for (int i = 0; i < n; i = i + 1) {
			cin >> s[i];
		}

		sort(s, s + n, compare);

		for (int i = 0; i < n; i = i + 1) {
			cout << s[i];
		}

		i = i + 1;
		cout << endl;
	}

}



// sort--->reverse:
//998 9
//9998


// 998 9

// 9989
// 9998