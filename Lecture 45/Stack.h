#include<iostream>
using  namespace std;
#define MAX 1000

template<typename T>
class Stack {
public:
	T a[MAX];
	T Index;

	Stack() {
		Index = -1;
	}

	void push(T x) {

		if (Index >= MAX - 1) {
			return;
		}

		Index = Index + 1;
		a[Index] = x;
		return;
	}


	bool empty() {
		if (Index == -1) {
			return 1;
		} else {
			return 0;
		}
	}

	T top() {
		if (Index < 0) {
			return -1;
		} else {
			return a[Index];
		}
	}

	void pop() {

		if (Index == -1) {
			return;
		} else {
			Index = Index - 1;
		}
	}
};









