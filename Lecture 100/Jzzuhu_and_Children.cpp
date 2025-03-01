#include<iostream>
#include<queue>
using  namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	queue<pair<int, int>>q;//Candies and Index


	for (int i = 0; i < n; i++) {
		int candies;
		cin >> candies;
		q.push({candies, i + 1});
	}

	int ans = -1;

	while (!q.empty()) {
		pair<int, int>p = q.front();
		q.pop();

		int Candies_Needed = p.first;
		int Child_Index = p.second;

		Candies_Needed -= m;

		if (Candies_Needed > 0) {
			q.push({Candies_Needed, Child_Index});
		} else {
			ans = Child_Index;
		}
	}

	cout << ans << endl;

}