#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int key;
	cin >> key;

	int First = -1, Last = -1;

	//First Occurrence of Key:
	for (int i = 0; i < n; i = i + 1) {

		if (a[i] == key) {
			First = i;
			break;
		}

	}


	//Last Occurrence of Key:
	for (int i = 0; i < n; i = i + 1) {

		if (a[i] == key) {
			Last = i;
		}

	}

	cout << First << " " << Last << endl;


	//How do we check the key is present
	//or not?

	if (Last == -1) {
		cout << "No Element is Not Present" << endl;
	} else {
		cout << "Element is Present" << endl;
	}

}









