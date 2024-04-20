#include<iostream>
using  namespace std;

int main() {
	int n, Total_Time;
	cin >> n >> Total_Time;

	int a[n];
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}

	int Maximum_Books = 0;

	for (int i = 0; i < n; i = i + 1) {
		//This represents we are going to every index.
		//This represents we are starting to read from
		//every index.

		int Time_Consumed = 0;
		int Books_I_Can_Read_from_Current_Index = 0;

		//This inner loop represents upto which book
		//I can read.
		for (int j = i; j < n; j = j + 1) {

			Time_Consumed = Time_Consumed + a[j];

			if (Time_Consumed > Total_Time) {
				break;
				//This means I am not able to read
				//upto the current book.
			}

			Books_I_Can_Read_from_Current_Index =
			    Books_I_Can_Read_from_Current_Index + 1;

		}

		if (Maximum_Books < Books_I_Can_Read_from_Current_Index) {
			Maximum_Books = Books_I_Can_Read_from_Current_Index;
		}
	}

	cout << Maximum_Books << endl;



}