#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	if (n > 10) {
		cout << "Mayank" << endl;
	} else {
		cout << "No" << endl;
	}

	int start = 1;

	while (start <= n) {
		cout << start << " ";
		start = start + 1;
	}

}





