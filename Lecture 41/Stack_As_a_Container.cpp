#include<iostream>
#include<stack>
#include<vector>
using  namespace std;


int main() {

	stack<int>s;
	vector<int>v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		s.push(x);
		v.push_back(x);
	}

	// cout << s.top() << endl;
	// s.pop();
	// cout << s.top() << endl;

	cout << s.empty() << endl;
	cout << s.size() << endl;


	while (s.empty() == 0) {
		cout << s.top() << " ";
		s.pop();
	}

	cout << endl;
	while (v.empty() == 0) {
		cout << v.back() << " ";
		v.pop_back();
	}



}