#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	char ch;
	int i = 1;
	int count1 = 0;//This Shows Capital
	int count2 = 0;//This Shows Small

	while (i <= n) {


		if (ch >= 65 and ch <= 90) {
			count1 = count1 + 1;
		} else {
			count2 = count2 + 1;
		}


		i = i + 1;
	}

	cout << count1 << " " << count2 << endl;
}




