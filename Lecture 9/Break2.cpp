#include<iostream>
using  namespace std;

int main() {

	int i = 1;

	while (i <= 5) {
		int j = 1;

		while (j <= i) {

			if (j == 3) {
				break;
			}

			cout << "*";
			j = j + 1;
		}

		cout << endl;

		i = i + 1;
	}


}

