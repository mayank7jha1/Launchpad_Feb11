#include<iostream>
using  namespace std;

const int x = 40;

int main() {

	// int x = 10;
	// int i = 3;

	// if (i <= 10) {
	// 	cout << x << endl;
	// 	x = 140;
	// }


	int x = 100;

	int i = 1;

	while (i <= 3) {

		int x = 200;
		int j = 1;

		while (j <= 3) {


			const int x = 300;
			//x = 500;


			cout << x << endl;

			j = j + 1;
		}

		x = 600;

		i = i + 1;
	}

}