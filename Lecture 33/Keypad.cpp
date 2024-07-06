#include<iostream>
using  namespace std;

char keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

char input[100];
char output[100];


void F(int i, int j) {

	if (input[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}

	char ch = input[i];

	int x = ch - 48;
	//int x = ch - '0';

	for (int k = 0; keypad[x][k] != '\0'; k = k + 1) {
		output[j] = keypad[x][k];

		F(i + 1, j + 1);
		// F(i + 1, j);
	}

}


int main() {
	cin >> input;
	F(0, 0);

	// char ch = input[2];
	// keypad[in]
	//cout << input[2] << endl;

}
