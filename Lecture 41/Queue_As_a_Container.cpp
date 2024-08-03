#include<iostream>
#include<queue>
#include<list>
#include<vector>
#include<stack>
using  namespace std;



int main() {
	vector<int>v;
	stack<int>s;
	queue<int>q;
	list<int>l;//Doubly LL.

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;

		v.push_back(x);
		s.push(x);
		q.push(x);
		l.push_back(x);
		l.push_front(x);
	}

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
}