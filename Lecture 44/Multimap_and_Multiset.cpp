#include<iostream>
#include<map>
#include<set>
#include<unordered_map>
using  namespace std;




int main() {
	int n;
	cin >> n;

	map<string, int>mp;
	map<pair<string, int>, int>mp1;
	unordered_map<string, int>ump;
	multimap<string, int>mmp;
	multiset<string>mms;

	for (int i = 0; i < n; i = i + 1) {

		string s;
		cin >> s;
		int x;
		cin >> x;

		mmp.insert({s, x});
		mp1.insert({{s, i}, x});
		ump.insert({s, x});
	}


	//For each
	for (pair <pair<string, int>, int> x : mp1) {
		cout << x.first.first << " " << x.second << endl;
	}

	cout << endl << endl << endl;

	for (auto x : mmp) {
		cout << x.first << " " << x.second << endl;
	}


	if (mmp.find("Mayankq") != mmp.end()) {
		cout << "Yes" << endl;
	}

	cout << mmp.count("Mayank") << endl;

	if (mmp.count("Mayank") > 0) {
		cout << "Yes" << endl;
	}

	string key = "Mayank";
	auto range = mmp.equal_range(key);

	for (auto it = range.first; it != range.second; it++) {
		cout << (*it).first << " " << it->second << endl;
	}


}







