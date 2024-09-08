#include<iostream>
using  namespace std;

class node {
public:
	int value;
	string key;

	//Next ka Address for Seperate
	//Chain Method.
	node* next;

	node(string k, int v) {
		value = v;
		key = k;
		next = NULL;
	}
};

