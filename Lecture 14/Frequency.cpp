#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Idea: Frequency of 2.
	// int count = 0;

	// for (int i = 0; i < n; i = i + 1) {

	// 	if (a[i] == 2) {
	// 		count = count + 1;
	// 	}
	// }

	for (int i = 0; i < n; i = i + 1) {
		int count = 0;

		for (int j = 0; j < n; j = j + 1) {
			if (a[j] == a[i]) {
				count = count + 1;
			}
		}

		cout << a[i] << " " << count << endl;
	}



	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << a[i] << " ";
	// }



}