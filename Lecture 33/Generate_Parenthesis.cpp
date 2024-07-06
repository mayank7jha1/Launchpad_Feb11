#include<iostream>
using  namespace std;

char output[100];
int n;

void F(int index, int CountO, int CountC) {

	if (index == 2 * n) {
		output[index] = '\0';
		cout << output << endl;
		return;
	}

	if (CountC < CountO) {
		output[index] = ')';
		F(index + 1, CountO, CountC + 1);
	}

	if (CountO < n) {
		output[index] = '(';
		F(index + 1, CountO + 1, CountC);
	}
}

int main() {
	cin >> n;
	F(0, 0, 0);
}