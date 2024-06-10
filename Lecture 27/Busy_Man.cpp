#include<iostream>
#include<algorithm>
using  namespace std;

class Activity {
public:
	int SP;
	int EP;

	Activity() {
		SP = 0;
		EP = 0;
	}
};

bool compare(Activity a, Activity b) {
	if (a.EP < b.EP) {
		return true;
	} else {
		return false;
	}
}

int main() {

	int t;
	cin >> t;

	while (t > 0) {

		int n;
		cin >> n;

		Activity a[n];
		for (int i = 0; i < n; i = i + 1) {
			cin >> a[i].SP >> a[i].EP;
		}

		//Data Ko sort on the basis of EP.

		sort(a, a + n, compare);
		int count = 1;
		int Previous_End_Point = a[0].EP;

		for (int i = 1; i < n; i = i + 1) {

			if (a[i].SP >= Previous_End_Point) {
				count = count + 1;
				Previous_End_Point = a[i].EP;
			}

		}

		cout << count << endl;
		// for (int i = 0; i < n; i = i + 1) {
		// 	cout << a[i].SP << " " << a[i].EP << endl;
		// }

		//cout << endl;

		t = t - 1;
	}


}