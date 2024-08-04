#include<iostream>
#include<map>
#include<unordered_map>
using  namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int>mp;
	unordered_map<string, int>ump;

	for (int  i = 0; i < n; i = i + 1) {
		string s; int x;
		cin >> s >> x;

		//Type 1:
		//mp.insert({s, x});

		//Type 2:
		//ump.insert(make_pair(s, x));

		// //Type 3:
		// pair<string, int>p1 = {s, x};
		// mp.insert(p1);

		// //Type 4:
		// //Just like your arrays.
		mp[s] = x;
	}


	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << (*it).first << " " << it->second << endl;
	}

	cout << endl;
	for (pair<string, int> x : mp) {
		cout << x.first << " " << x.second << endl;
	}


	//Find and Count:
	map<string, int>::iterator it = mp.find("Mayank");
	bool x = mp.count("Mayank");

	cout << (*it).first << " " << (it)->second << endl;
	cout << mp["Mayank"] << endl;
	cout << mp["Samyak"] << endl;

	if (it != mp.end()) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}


	if (mp.find("Mayank") != mp.end()) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	if (mp.count("Mayank") == 1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}











