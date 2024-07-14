#include<iostream>
#include<vector>
#include<utility>
using  namespace std;



int main() {

	//This is an Array where every index represents a value integer.
	int a1[10];
	a1[2] = 980;


	//This is an array where every index represents a value vector.
	vector<int>a2[10];
	a2[2] = {1, 2, 3, 4, 5};


	//This is an array where every index represents a value pair.
	pair<string, int>a3[10];
	a3[2] = {"Atul", 976};

	cout << a3[2].first << endl;
	cout << a2[2][2] << endl;


	//Differences:
	//Arrays of Arrays: 2-D Array
	int a5[5][5] = {{1, 2, 3, 4, 5}, {3, 4, 5,}};

	//Array of Vectors:
	vector<int>a6[10] = {{1}, {2, 3}, {4, 5, 6, 67}};


	// int n;
	// cin >> n;
	// vector<int>a7[n] = {0};

	// vector<int>ans;


	// for (int i = 0; i < n; i = i + 1) {
	// 	int x;
	// 	cin >> x;

	// }


	// int x;
	// cin >> x;

	// a7[0].push_back(x);
	// cin >> a7[0][0];


	vector<int>v;


	//Every Element of this vector is a pair.
	vector<pair<string, int>>v1;


}



























