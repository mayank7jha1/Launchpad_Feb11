#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	//Check if this number is lucky or not.
	int flag = 0;
	int temp = n;

	while (n > 0) {
		int digit = n % 10;
		if (digit == 4 or digit == 7) {
			n = n / 10;
		} else {
			flag = 1;
		}
	}

	if (flag == 0) {
		cout << "YES" << endl;
		return 0;
	}


	if (temp % 4 == 0 or temp % 7 == 0 or temp % 44 == 0 or ) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}