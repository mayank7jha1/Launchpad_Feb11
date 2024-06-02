#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;


bool compare(int a, int b) {

	if (a > b) {
		return true;
	} else {
		//This means they are at wrong position and swap them
		return false;
	}
}



int main() {
	int n;
	cin >> n;
	int a[n];
	vector<int>v(n);

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i = i + 1) {
		cin >> v[i];
	}

	sort(a, a + n, compare);

	sort(v.begin(), v.end(), compare);


	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < n; i = i + 1) {
		cout << v[i] << " ";
	}
}