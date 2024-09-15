#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
using  namespace std;

int main() {

	int n;
	cin >> n;

	vector<int>v;//Dynamic Array
	forward_list<int>fl;//Singly Linked List
	list<int>l;//Doubly Linked List

	stack<int>s;
	queue<int>q;


	map<string, int>mp;
	unordered_map<string, int>ump;

	set<string>s1;
	unordered_set<string>us;


	multimap<string, int>mmp;
	multiset<string>mms;



	for (int i = 0; i < n; i++) {

		// pair<string, int>p;
		string s; int x;
		cin >> s >> x;
		// us.insert(s);
		mmp.insert({s, x});
		// p.first = s;
		// p.second = x;

		// mp.insert(p);

		//mp.insert(make_pair(s, x));
		//mp.insert({s, x});

		//Updatation
		//ump[s] = x;

	}

	// for (unordered_map<string, int>::iterator it = ump.begin(); it != ump.end(); it++) {
	// 	cout << (*it).first << " " << it->second << endl;
	// }

	// cout << endl << endl;

	// for (pair<string, int> x : ump) {
	// 	cout << x.first << " " << x.second << endl;
	// }


	// for (set<string>::iterator it = s1.begin(); it != s1.end(); it++) {
	// 	cout << (*it) << endl;
	// }

	// cout << endl << endl;

	// for (string x : us) {
	// 	cout << x << endl;
	// }


	for (multimap<string, int>::iterator it = mmp.begin(); it != mmp.end(); it++) {
		cout << (*it).first << " " << it->second << endl;
	}

	cout << endl << endl;

	for (pair<string, int> x : mmp) {
		cout << x.first << " " << x.second << endl;
	}


}