#include<iostream>
#include<map>
#include<list>
using  namespace std;

template<typename T>
class Graph {
	map<T, list<T>>mp;

public:
	void addEdge(T x, T y, bool Direction) {
		mp[x].push_back(y);
		if (Direction == 0) {
			mp[y].push_back(x);
		}
	}

	void Print() {
		for (pair<int, list<int>> x : mp) {
			int Node = x.first;
			list<int>Nbr = x.second;
			cout << Node << "  : ";
			for (int y : Nbr) {

				cout << y << " ";
			}
			cout << endl;
		}
	}
};



int main() {
	int n, m, Direction;
	cin >> n >> m >> Direction;

	Graph<int>gr;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		gr.addEdge(x, y, Direction);
	}

	gr.Print();
}













