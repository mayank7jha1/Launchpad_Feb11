#include<iostream>
using  namespace std;



int main() {
	int n;
	cin >> n;

	int a[n] {0};

	// cin >> a[0];
	// cin >> a[1];

	for (int i = 0; i < 10; i = i + 1) {
		cin >> a[i];
	}

	int key;
	cin >> key;

	//Find the First and the
	//Last Occurrence of Key.

	//First Occurrence :
	for (int i = 0; i < 10; i = i + 1) {

		if (a[i] == key) {
			cout << i << endl;
			return 0;
		}
	}


	//Last Occurrence :
	int Last = -1;

	for (int i = 0; i < 10; i = i + 1) {

		if (a[i] == key) {
			Last = i;
			//Last = Last + 1;

		}
	}

	cout << Last << endl;


}







