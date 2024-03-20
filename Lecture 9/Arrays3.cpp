#include<iostream>
using  namespace std;




int main() {
	int n;
	cin >> n;

	int a[n] {0};

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	// cout << a[i];

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}

}












