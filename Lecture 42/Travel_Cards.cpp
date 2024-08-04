#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using  namespace std;
#define int long long

bool com(int x, int y) {
	return x > y;
}

void Travel_Cards() {
	int n, a, b, k, f;
	cin >> n >> a >> b >> k >> f;

	//This is the map for the route not trips.
	map<pair<string, string>, int>mp;

	//Key: Pair<string,string>
	//Value: Int
	string Last_Point = "";

	for (int i = 0; i < n; i = i + 1) {

		string CSP, CEP;
		cin >> CSP >> CEP;
		int price = 0;

		if (CSP == Last_Point) {
			//This  is  Transshipment:
			price = b;
		} else {
			price = a;
		}

		Last_Point = CEP;
		//I want to insert this trip in map as
		//a route (i.e Lexographycally arranged).
		if (CSP > CEP) {
			swap(CSP, CEP);
		}

		mp[ {CSP, CEP}] = mp[ {CSP, CEP}] + price;
	}

	vector<int>RouteCost;
	int Total_Cost = 0;

	for (auto x : mp) {
		RouteCost.push_back(x.second);
		Total_Cost = Total_Cost + x.second;
	}

	//Sort in desc order.
	// sort(RouteCost.begin(), RouteCost.end());
	// reverse(RouteCost.begin(), RouteCost.end());

	// sort(RouteCost.begin(), RouteCost.end(), com);
	// sort(RouteCost.begin(), RouteCost.end(), greater<int>());

	sort(RouteCost.rbegin(), RouteCost.rend());

	for (int i = 0; i < k and i < n; i = i + 1) {
		if (RouteCost[i] > f) {
			Total_Cost = Total_Cost - RouteCost[i] + f;
		} else {
			break;
		}
	}

	cout << Total_Cost << endl;
}



int32_t main() {
	Travel_Cards();
}



/*

	greater<int>(): Desc.
	lesser<int>():  Asc
*/