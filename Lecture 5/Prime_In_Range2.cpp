#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int start1 = 2;

	while (start1 <= n) {

		int start2 = 2;
		int flag = 1;

		while (start2 <= start1 - 1) {

			if ((start1 % start2) == 0) {
				flag = 0;
			}
			start2 = start2 + 1;
		}

		if (flag == 1) {
			cout << start1 << " ";
		}

		start1 = start1 + 1;
	}
}