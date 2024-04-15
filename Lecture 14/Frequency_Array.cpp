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

	//Step 1: Find the Maximum Element in Array.
	int ans = INT_MIN;
	for (int i = 0; i < n; i = i + 1) {
		if (ans < a[i]) {
			ans = a[i];
		}
	}

	int freq[ans + 1] = {0};

	//Step 2: Build the Frequency Array.
	for (int i = 0; i < n; i = i + 1) {
		int Element = a[i];
		freq[Element] = freq[Element] + 1;
	}

	//Step 3: Print the Frequency Array.

	for (int i = 0; i < ans + 1; i = i + 1) {
		if (freq[i] > 0) {
			cout << i << " " << freq[i] << endl;
		}
	}


}