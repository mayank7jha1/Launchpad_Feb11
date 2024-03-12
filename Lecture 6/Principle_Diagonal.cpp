#include<iostream>
using  namespace std;

//Print Out the Principle Diagonal and Star

int main() {
	int n;
	cin >> n;

	int i = 1;
	while (i <= n) {
		int j = 1;
		while (j <= n) {

			//Print "*" when
			//you are at the desired Box.

			if (j <= i) {
				//This is My Desired Box.
				cout << "*";
			}

			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}




