#include<iostream>
using  namespace std;
int x = 50;

int main() {

	int x = 90;
	int i = 1;
	if (i <= 3) {
		//int x = 150;

		if (i <= 3) {
			//int x = 290;
			cout << x << endl;
		}
		cout << ::x + 100 << endl;
	}

	cout << ::x << endl;

}