#include<iostream>
#include<unordered_map>
using  namespace std;



/*

	Motivation:

	Q.	Given an  array of N strings, and an array of  Q queries,
		check for each query if it is present in the array or not.

	Q. Also find the Unique Prefix.
*/

class node {
public:
	char ch;
	bool terminal;
	unordered_map<char, node*>childMap;
	int freq;

	node(char ch) {
		this->ch = ch;
		this->terminal = 0;
		this->freq = 0;
	}
};

class Trie {

	node* root;
public:
	Trie() {
		root = new node('\0');
	}


	// O(length of String)

	void insert(string s) {
		node* current = root;

		for (auto x : s) {

			//Check the current character

			//This is when the current character is not present in the branch
			if (current->childMap.find(x) ==
			        current->childMap.end()) {

				//You will have to create a new branch
				node* n = new node(x);
				current->childMap[x] = n;

			}

			//This is when the current character is present in the branch
			current = current->childMap[x];
			current->freq++;
		}

		current->terminal = true;
	}


	bool search(string s) {

		node* current = root;

		for (char ch : s) {
			if (current->childMap.count(ch) == 0) {
				return false;
			}
			current = current->childMap[ch];
		}

		if (current->terminal == 1) {
			return true;
		} else {
			return false;
		}
	}

	string UniquePrefix(string s) {
		string ans = "";//Unique Prefix

		node* current = root;

		for (char ch : s) {
			current = current->childMap[ch];
			ans += ch;
			if (current->freq <= 1) {
				return ans;
			}
		}
		return "";
	}

}



int main() {

}