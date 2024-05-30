#include<iostream>
#include<algorithm>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	vector<int>v(n);
	for (int i = 0; i < n; i = i + 1) {
		cin >> v[i];
	}

	//Sort
	sort(a, a + n);

	//Since Vector Is a Container

	//.begin()
	//.end()

	sort(v.begin(), v.end());

	reverse(a, a + n);

	reverse(v.begin(), v.end());

	/*

		Lower/Upper Bound Functions returns address/iterator
		Since i need index we subtract it with base address.
	*/

	int k = lower_bound(a, a + n, 3) - a;
	int k2 = lower_bound(a + 3, a + n, 3) - a + 3;

	int k1 = lower_bound(v.begin() + 3, v.end(), 3) - v.begin() + 3;


}








