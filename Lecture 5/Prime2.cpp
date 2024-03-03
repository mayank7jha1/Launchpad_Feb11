#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int start = 2;
	int flag = 1;

	while (start <= n - 1) {

		if ((n % start) == 0) {
			//Task
			flag = 0;
		}

		start = start + 1;

	}


	if (flag == 0) {
		cout << "Not a Prime Number" << endl;
	} else {
		cout << "Prime Number" << endl;
	}
}



