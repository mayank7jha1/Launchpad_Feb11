#include<iostream>
using  namespace std;




void merge(int* a, int s, int e) {


	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;

	int k = s;

	int c[100] {0};


	while (i <= mid and j <= e) {
		if (a[i] <= a[j]) {
			c[k] = a[i];
			k = k + 1;
			i = i + 1;
		} else {
			c[k] = a[j];
			j = j + 1;
			k = k + 1;
		}
	}

	//what if i still has  not reached the end.
	while (i <= mid) {
		c[k] = a[i];
		k = k + 1;
		i = i + 1;
	}

	//what if j still has  not reached the end.
	while (j <= e) {
		c[k] = a[j];
		k = k + 1;
		j = j + 1;
	}



	//copy the data of c into a.

	for (int i = s; i <= e; i = i + 1) {
		a[i] = c[i];
	}
}


//Dividing the range by  mid point.
void mergesort(int *a, int s, int e) {


	if (s >= e) {
		return;
	}

	int mid = (s + e) / 2;
	mergesort(a, s, mid);
	mergesort(a, mid + 1, e);

	//Conquer: Merge the two range.
	merge(a, s, e);
}


int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	mergesort(a, 0, n - 1);

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}
}