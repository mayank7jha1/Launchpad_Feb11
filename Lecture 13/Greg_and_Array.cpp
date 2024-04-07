#include<iostream>
using  namespace std;
#define int long long
int n, m, k;
int a[100001] = {0};
int l[100001] = {0}, r[100001] = {0}, d[100001] = {0};
int Operation_Count[100005] = {0};
int difference[100001] = {0};

//Maximum Size of Array That you can create
//In your Program is of 10^8. (Global Array)


int32_t main() {

	//Maximum Size of Array That you can create
	//In your Program is of 10^6. (Local Array)
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i = i + 1) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i = i + 1) {
		cin >> l[i] >> r[i] >> d[i];
	}

	//Resolution of Query.
	for (int i = 1; i <= k; i = i + 1) {
		int x, y;
		cin >> x >> y;
		//cout << x << " " << y << endl;
		Operation_Count[x] = Operation_Count[x] + 1;
		Operation_Count[y + 1] = Operation_Count[y + 1] - 1;
	}

	//Operation Count Array ka Prefix Sum Lo.

	for (int i = 1; i <= m; i = i + 1) {

		Operation_Count[i] = Operation_Count[i - 1]
		                     + Operation_Count[i];

	}

	// for (int i = 1; i <= m; i = i + 1) {
	// 	cout << Operation_Count[i] << " ";
	// }


	//We Want to Resolve a Single Query.
	for (int i = 1; i < 100005; i = i + 1) {
		int t = Operation_Count[i] * d[i];
		int o = l[i];
		int p = r[i];

		difference[o] = difference[o] + t;
		difference[p + 1] = difference[p + 1] - t;
	}

	//Take Prefix of Difference Array.

	for (int i = 1; i <= 100005; i = i + 1) {
		difference[i] = difference[i - 1] + difference[i];
	}

	// cout << endl;

	// for (int i = 1; i <= n; i = i + 1) {
	// 	cout << difference[i] << " ";
	// }

	for (int i = 1; i <= n; i = i + 1) {
		a[i] = a[i] + difference[i];
	}
	//cout << endl;

	for (int i = 1; i <= n; i = i + 1) {
		cout << a[i] << " ";
	}
}