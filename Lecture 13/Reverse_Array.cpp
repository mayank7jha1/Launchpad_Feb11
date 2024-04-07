#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int i = 0, j = n - 1;

	while (i < j) {

		//Swap a[i] and a[j].

		int temp = a[j];
		a[j] = a[i];
		a[i] = temp;


		i = i + 1;
		j = j - 1;
	}

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}

}



