#include<iostream>
#include"Queue.h"
using  namespace std;

int main() {
	Queue<int>st;

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		st.push(x);
	}

	while (!st.empty()) {
		cout << st.front() << " ";
		st.pop();
	}
}