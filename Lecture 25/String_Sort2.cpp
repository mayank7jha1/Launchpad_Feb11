#include<iostream>
#include<string>
#include<algorithm>
using  namespace std;




int main() {

	int n;
	cin >> n;
	string s[n];//This is a Array of string.

	for (int i = 0; i < n; i = i + 1) {
		cin >> s[i];
	}

	sort(s, s + n);

	//sort(s[2].begin(), s[2].end());

	// for (int i = 0; i < n; i = i + 1) {
	// 	sort(s[i].begin(), s[i].end());
	// }

	for (int i = 0; i < n; i = i + 1) {
		cout << s[i] << endl;
	}

	// string str = "Mayank";

	// sort(str.begin(), str.end());

	// cout << str << endl;


}