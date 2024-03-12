#include<iostream>
using  namespace std;

int main() {

	char ch;
	int count1 = 0;//This Shows Capital
	int count2 = 0;//This Shows Small
	int count3 = 0;
	while (cin >> ch) {

		if (ch >= 65 and ch <= 90) {
			count1 = count1 + 1;
		} else if (ch >= 97 and ch <= 122) {
			count2 = count2 + 1;
		} else {
			count3 = count3 + 1;
		}

	}

	cout << count1 << " " << count2 << endl;
}




