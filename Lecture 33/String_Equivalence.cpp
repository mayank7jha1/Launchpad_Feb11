#include<iostream>
using  namespace std;

char output[11];
int n;

void F(int index, char Max_Character) {

	if (index == n) {
		output[n] = '\0';
		cout << output << endl;
		return;
	}

	for (char x = 'a'; x <= Max_Character; x = x + 1) {
		output[index] = x;
		if (x == Max_Character) {
			F(index + 1, Max_Character + 1);
		} else {
			F(index + 1, Max_Character);
		}
	}
}

int main() {
	cin >> n;

	F(0, 'a');

}