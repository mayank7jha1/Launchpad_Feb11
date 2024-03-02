#include<iostream>
#include<climits>
using  namespace std;
// int a, b, c, d, e, f, g;
// cin >> a >> b >> c >> d >> e >> f >> g;

int main() {
	int n;
	cin >> n;

	int start = 1;
	int Largest = INT_MIN;

	while (start <= n) {

		//Task:
		int x;
		cin >> x;
		//cout << x << " ";
		if (Largest < x) {
			Largest = x;
		}

		start = start + 1;
	}

	cout << Largest << endl;

}




