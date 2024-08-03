#include<iostream>
#include<queue>
using  namespace std;






int main() {
	priority_queue<int>pq;//Max Heap
	priority_queue<int, vector<int>, greater<int>>mpq;//Min Heap

	int n;
	cin >> n;

	for (int i = 0; i < n; i = i + 1) {
		int x;
		cin >> x;
		mpq.push(x);
	}

	while (!mpq.empty()) {

		cout << mpq.top() << endl;
		mpq.pop();
	}


}