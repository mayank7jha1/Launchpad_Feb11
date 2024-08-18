#include<iostream>
using  namespace std;
#define MAX 10

//Circular Queue
template<typename T>
class Queue {
public:
	// T *a;
	T a[MAX];
	int front1;
	int back;
	int Total_size;
	int Current_size;

	Queue() {
		// a = new T[size];
		front1 = -1;
		back = -1;
		Total_size = MAX;
		Current_size = 0;
	}

	void push(T data) {

		if (Current_size == Total_size) {
			return;
		}

		if (Current_size == 0) {
			front1 = 0;
		}

		back = back + 1;
		back = back % Total_size;

		a[back] = data;
		Current_size = Current_size + 1;
	}

	void pop() {

		if (Current_size == 0) {
			return;
		}

		if (Current_size == 1) {
			front1 = back = -1;
		} else {

			front1 = front1 + 1;
			front1 = front1 % Total_size;
		}

		Current_size = Current_size - 1;
	}

	bool empty() {
		if (Current_size == 0) {
			return true;
		} else {
			return false;
		}
	}

	T front() {

		if (Current_size == 0) {
			return -1;
		} else {
			return a[front1];
		}
	}

	int size() {
		return Current_size;
	}


};













