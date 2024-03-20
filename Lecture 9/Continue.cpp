#include<iostream>
using  namespace std;

int main() {


	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		cout << i << " ";
	}


	for (int i = 0; i < n; i = i + 1) {

		if (i == 5) {
			continue;
		}

		cout << i << " ";
	}

}






