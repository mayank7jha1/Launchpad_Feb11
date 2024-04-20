#include<iostream>
using  namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	char ch[n];
	cin >> ch;

	//We have two type of Changes :
	//a->b or b->a;

	//Current change is b->a.
	char x = 'a';//This character the changable character

	int Maximum_Substring = 0;
	int count = 0;//The no of changes in the given window.
	int j = 0;

	for (int i = 0; i < n; i = i + 1) {

		if (ch[i] != x) {
			//This is the changable character and
			//we assume we have changed it.
			count = count + 1;
		}

		//Shrinking to make the current window desired one
		//if it is not.

		while (j <= i and count > k) {

			if (ch[j] != x) {
				//This is the changable character.
				count = count - 1;
			}
			j = j + 1;
		}

		if (Maximum_Substring < i - j + 1) {
			Maximum_Substring = i - j + 1;
		}

	}

	//Current change is a->b.
	x = 'b';//This character the changable character

	count = 0;//The no of changes in the given window.
	j = 0;

	for (int i = 0; i < n; i = i + 1) {

		if (ch[i] != x) {
			//This is the changable character and
			//we assume we have changed it.
			count = count + 1;
		}

		//Shrinking to make the current window desired one
		//if it is not.

		while (j <= i and count > k) {

			if (ch[j] != x) {
				//This is the changable character.
				count = count - 1;
			}
			j = j + 1;
		}

		if (Maximum_Substring < i - j + 1) {
			Maximum_Substring = i - j + 1;
		}

	}

	cout << Maximum_Substring << endl;


}