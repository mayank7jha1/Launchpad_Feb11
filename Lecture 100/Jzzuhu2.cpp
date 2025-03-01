#include<iostream>
#include<queue>
#include<vector>
#include<climits>
using  namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int>a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (a[i] <= m) {
			a[i] = 0;
		} else {
			a[i] = ((a[i] + m - 1) / m);
		}
	}

	int Maxi = INT_MIN;

	int Index = -1;

	for (int i = 0; i < n; i++) {
		if (Maxi <= a[i]) {
			Maxi = a[i];
			Index = i;
		}
	}

	cout << Index + 1 << endl;

}