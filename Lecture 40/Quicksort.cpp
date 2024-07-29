#include<iostream>
using  namespace std;

int a[100005];

int Partition(int s, int e) {
	int i = s - 1;
	int j = s;
	int Pivot = a[e];

	for (; j < e; j = j + 1) {
		if (a[j] <= Pivot) {
			i = i + 1;
			swap(a[j], a[i]);
		}
	}

	swap(a[i + 1], a[e]);
	return i + 1;
}




void Quicksort(int s, int e) {

	if (s >= e) {
		return;
	}

	int Correct_Pivot_Position = Partition(s, e);

	Quicksort(s, Correct_Pivot_Position - 1);
	Quicksort(Correct_Pivot_Position + 1, e);

}


int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	Quicksort(0, n - 1);

	for (int i = 0; i < n; i = i + 1) {
		cout << a[i] << " ";
	}

}






