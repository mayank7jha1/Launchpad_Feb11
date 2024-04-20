#include<iostream>
using  namespace std;

int main() {
	int n, Total_Time;
	cin >> n >> Total_Time;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int Time_Consumed = 0;
	int count = 0;
	int j = 0;
	int ans = 0;

	for (int i = 0; i < n; i = i + 1) {

		Time_Consumed = Time_Consumed + a[i];

		while (j <= i and Time_Consumed > Total_Time) {

			Time_Consumed = Time_Consumed - a[j];
			j = j + 1;

		}

		if (ans < i - j + 1) {
			ans = i - j + 1;
		}
	}

	cout << ans << endl;
}