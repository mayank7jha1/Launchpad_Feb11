#include<iostream>
using  namespace std;



//Prime In Range:

// n: 2-----n tak ke prime number print karne hain.
int main() {
	int n;
	cin >> n;

	int start1 = 2;

	while (start1 <= n) {

		//Check if the current no
		//prime or not.
		//Current No is Represented
		//by start1.

		int start2 = 2;
		int flag = 1;

		//I have to check from 2 to start1-1
		//koi number aisa hain jo start1 ko
		//divide kare.

		while (start2 <= start1 - 1) {

			if ((start1 % start2) == 0) {
				//Task
				flag = 0;
			}


			start2 = start2 + 1;
		}

		if (flag == 1) {
			cout << start1 << " ";
		}

		start1 = start1 + 1;
	}
}