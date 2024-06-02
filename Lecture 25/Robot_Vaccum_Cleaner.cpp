#include<iostream>
#include<algorithm>
#include<string>
using  namespace std;



int Noise(string &str) {

	int ans = 0;
	int s = 0;

	for (int i = 0; i < str.length(); i = i + 1) {

		if (str[i] == 's') {
			s = s + 1;
		} else {

			ans = ans + s;
		}
	}

	return ans;

}


bool compare(string &a, string &b) {

	string ab = a + b;//concatination
	string ba = b + a;

	if (Noise(ab) > Noise(ba)) {
		return true;
	} else {
		return false;
	}

}

int main() {
	int n;
	cin >> n;

	string s[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> s[i];
	}


	sort(s, s + n, compare);

	string final;

	for (int i = 0; i < n; i = i + 1) {
		final = final + s[i];
	}

	cout << Noise(final) << endl;
}