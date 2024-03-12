#include<iostream>
using  namespace std;

int main() {

	char ch;
	int x = 0, y = 0;

	while (cin >> ch) {

		if (ch == 'E') {
			x = x + 1;
		} else if (ch == 'W') {
			x = x - 1;
		} else if (ch == 'N') {
			y = y + 1;
		} else {
			y = y - 1;
		}
	}

	//cout << x << " " << y << endl;

	/*
		Agar East jaana hain toh
		pehle east jao and then north
		ya south jao.

		Lekin agar west jaana to pehle
		north ya south jao fir west.
	*/

	if (x > 0) {

		//Mujhe East jaana hain.
		int j = 1;
		while (j <= x) {
			cout << "E";
			j = j + 1;
		}

		//This is to print North ya South.
		if (y > 0) {
			int j = 1;
			while (j <= y) {
				cout << "N";
				j = j + 1;
			}
		} else {
			y = (-1) * y;
			int j = 1;
			while (j <= y) {
				cout << "S";
				j = j + 1;
			}
		}
	} else {

		//Mujhe West Jaana.

		//This is to print North ya South.
		if (y > 0) {
			int j = 1;
			while (j <= y) {
				cout << "N";
				j = j + 1;
			}
		} else {
			y = (-1) * y;
			int j = 1;
			while (j <= y) {
				cout << "S";
				j = j + 1;
			}
		}

		//Now I Will go West.
		x = (-1) * x;
		int j = 1;
		while (j <= x) {
			cout << "W";
			j = j + 1;
		}

	}

}







