#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int start = 2;

	while (start <= n - 1) {

		if ((n % start) == 0) {
			//Task
			cout << "Not a Prime Number" << endl;
			return 0;
		}


		start = start + 1;
	}


	//That means : This number is a Prime.
	cout << "Prime Number" << endl;
}



