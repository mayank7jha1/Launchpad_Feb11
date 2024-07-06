#include<iostream>
using  namespace std;
char input[100];
char output[100];

void F(int i, int j) {

	if (input[i] == '\0') {

		output[j] = '\0';
		cout << output << endl;
		return;
	}

	//Take this current Character.
	output[j] = input[i];
	F(i + 1, j + 1);

	//Not Take this Current Character.
	//Not Do Anything.

	F(i + 1, j);

}

int main() {
	cin >> input;
	F(0, 0);
}