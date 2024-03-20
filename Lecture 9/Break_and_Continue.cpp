#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < 10; i = i + 1) {
		cout << i << " ";
	}

	cout << endl;

	//Break : Loop ko Break karta hain at
	//a certain condition.

	for (int i = 0; i < 10; i = i + 1) {

		if (i == 5) {
			break;
		}

		cout << i << " ";

	}

	cout << endl;
	cout << "HI This is Mayank";


}





