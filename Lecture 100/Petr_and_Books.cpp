#include<iostream>
using  namespace std;
#define int long long

int32_t main() {
	int n;
	cin >> n;

	int a[7];
	int sum = n;
	int Total = 0;

	for (int i = 0; i < 7; i++) {
		cin >> a[i];
		Total += a[i];
	}

	int count = 0;
	sum %= Total;

	if (sum == 0) {
		cout << 1 << endl;
		return 0;
	}

	while (sum >= 0) {
		sum -= a[count];
		count++;
		count %= 7;
	}

	if (count == 0) {
		cout << 7 << endl;
	} else {
		cout << count << endl;
	}
}












