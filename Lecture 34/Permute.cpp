#include<iostream>
#include<cstring>
using  namespace std;

void Permute1(string str, int index) {

	if (index == str.length()) {
		cout << str << endl;
		return;
	}


	for (int j = index; j < str.length(); j = j + 1) {
		swap(str[index], str[j]);
		Permute1(str, index + 1);
	}

}

void Permute2(char* s, int index) {

	if (index == strlen(s)) {
		cout << s << endl;
		return;
	}

	for (int j = index; j < strlen(s); j = j + 1) {

		swap(s[index], s[j]);
		Permute2(s, index + 1);

		swap(s[index], s[j]);//Backtracking

	}

}


int main() {

	string str;
	cin >> str;

	char s[100];
	cin >> s;

	Permute1(str, 0);
	cout << endl << endl;
	Permute2(s, 0);

}




















