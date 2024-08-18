#include<iostream>
#include"Stack.h"
using  namespace std;

int main() {

	Stack<int>st;

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		st.push(x);
	}

	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}

}