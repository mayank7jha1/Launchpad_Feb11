#include<iostream>
#include"Node.h"
using  namespace std;


class Hashmap {

	node **table;
	int ts;
	int cs;

	void Rehashing() {

		//Create a table of Double size and copy all the
		//data in the new index based upon the hashfunction.

		node** oldTable = table;
		table = new node*[2 * ts];
		ts = 2 * ts;
		cs = 0;

		for (int i = 0; i < ts; i++) {
			table[i] = NULL;
		}

		//Copy All the data from the oldTable to the
		//new table based upon the hashfunction's index.

		for (int i = 0; i < ts / 2; i++) {

			//oldTable[i]--->Linked List ka Head;
			//and You want to iterate over this linked
			//list ke head par copy all the data.

			node* head = oldTable[i];

			while (head != NULL) {
				insert(head->key, head->value);
				head = head->next;
			}

		}

		delete []oldTable;
	}

	int HashFunction(string key) {

		int multiply = 1;
		int Index = 0;

		for (int i = 0; i < key.length(); i++) {
			Index = (key[i] % ts * multiply % ts) % ts;
			multiply = (multiply % ts * 29 % ts) % ts;
		}

		return Index;
	}


public:

	Hashmap(int size = 7) {
		table = new node*[size];
		cs = 0;
		ts = size;
		for (int i = 0; i < ts; i++) {
			table[i] = NULL;
		}
	}


	void insert(string key, int value) {

		int HashIndex = HashFunction(key);
		node* n = new node(key, value);
		cs++;

		//Insert At head for the HashIndex in HashTable
		n->next = table[HashIndex];
		table[HashIndex] = n;

		if (((cs / ts) * 1.0) >= 0.7) {
			Rehashing();
		}
	}

	void search(string k) {
		int HashIndex = HashFunction(k);
		node* head = table[HashIndex];
		while (head != NULL) {
			if (head->key == k) {
				cout << head->key << " " << head->value << endl;
				return;
			}
			head = head->next;
		}
		cout << "-1" << endl;
		return;
	}

	void print() {

		for (int i = 0; i < ts; i++) {
			cout << i << " ---> ";
			node* head = table[i];

			while (head != NULL) {
				cout << head->key << " " << head->value << " --> ";
				head = head->next;
			}

			cout << endl;
		}
	}
};



