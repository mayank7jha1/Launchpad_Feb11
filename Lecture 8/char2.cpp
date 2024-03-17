#include<iostream>
using  namespace std;

int main() {
	char ch;

	int countC = 0, countS = 0, countE = 0;

	while (cin.get(ch)) {

		if (ch >= 'A' and ch <= 'Z') {
			countC = countC + 1;
		} else if (ch >= 'a' and ch <= 'z') {
			countS = countS + 1;
		} else {
			countE = countE + 1;
		}

	}

	cout << countC << " " << countS << " " << countE << endl;
}