#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	//Step 1: Find the Maximum and Minimum Element in Array.
	int maxi = INT_MIN;
	int mini = INT_MAX;

	for (int i = 0; i < n; i = i + 1) {

		if (maxi < a[i]) {
			maxi = a[i];
		}

		if (mini > a[i]) {
			mini = a[i];
		}

	}

	int freq[maxi - mini + 1] = {0};

	//Step 2: Build the Frequency Array.
	for (int i = 0; i < n; i = i + 1) {

		int Element = a[i];
		freq[Element - mini] = freq[Element - mini] + 1;

	}

	//Step 3: Print the Frequency Array.

	for (int i = 0; i < maxi - mini + 1; i = i + 1) {

		if (freq[i] > 0) {
			cout << i + mini << " " << freq[i] << endl;
		}

	}


}