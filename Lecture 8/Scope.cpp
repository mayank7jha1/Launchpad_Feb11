#include<iostream>
using  namespace std;




int main() {
	int x = 10; //Definition of a Variable.

	//Code:
	int i = 1;
	while (i <= 3) {
		int x = 50;
		//cout << x << " ";
		//cout << i << endl;
		if (i <= 3) {
			x = x + 10;
			cout << x << endl;
		}

		i = i + 1;
	}

	cout << x << endl;
}