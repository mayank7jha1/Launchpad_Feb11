#include<iostream>
#include<string>
using  namespace std;

//Unordered_Map
template<typename T>

class node {
public:
	string key;
	T value;

	//Seperate Chain Method
	node<T>*next;

	//Constructor
	node(string s, int v) {
		value = v;
		key = s;
		next = NULL;
	}

	//Destructor
	~node() {
		if (next != NULL) {
			delete next;
		}
	}

};

template<typename T>
class Hashtable {

	node<T>** table;
	int ts;
	int cs;//We require this for rehashing.

	//Hash Function:

	int hashfunction(string key) {

		int multiply = 1;
		int ans = 0;

		for (int i = 0; i < key.size(); i = i + 1) {
			ans += ((key[i] % ts) * (multiply % ts)) % ts;
			multiply = ((multiply % ts) * 29) % ts;
		}

		ans = ans % ts;
		return ans;
	}

public:

	Hashtable(int size = 10) {
		ts = 10;
		cs = 0;
		table = new node<T>*[size];
		for (int i = 0; i < ts; i = i + 1) {
			table[i] = NULL;
		}
	}

	void insert(string key, int value) {

		int HashIndex = hashfunction(key);

		//Constructor : Initialisation
		node<T>*n = new node<T>(key, value);
		cs = cs + 1;

		//Insert At Head of Linked List.
		n->next = table[HashIndex];
		table[HashIndex] = n;


		//If cs is greater than 70 percent: rehashing

		if ((cs / ts * 1.0) >= 7.0) {
			rehashing();
		}


	}


};



























