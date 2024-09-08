#include<iostream>
#include"Hashmap.h"

using  namespace std;

int main() {
	Hashmap mp;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		int x;
		cin >> s >> x;
		mp.insert(s, x);
	}

	mp.print();
}