#include<iostream>
#include<map>
#include<list>
using  namespace std;

template<typename T>
class Graph {
	map<T, list<T>>mp;//Adjacency List

public:
	void addEdge(T x, T y, bool Direction) {
		mp[x].push_back(y);
		if (Direction == 0) {
			mp[y].push_back(x);
		}
	}

	void DFS_Helper(T scr, map<T, bool>&visited) {
		cout << scr << " ";
		visited[scr] = 1;

		for (auto Nbr : mp[scr]) {
			if (visited[Nbr] == 0) {
				DFS_Helper(Nbr, visited);
			}
		}
	}


	void Dfs(T scr) {
		map<T, bool>visited;
		for (pair<T, list<T>>x : mp) {
			T Node = x.first;
			visited[Node] = 0;
		}
		int Count = 1;

		for (pair<int, list<int>>x : mp) {
			if (!visited[x.first]) {

				cout << "Component No : " << Count << " ---> ";
				DFS_Helper(x.first, visited);
				cout << endl;
				Count++;
			}
		}

		cout << "Total Components : " << Count - 1 << endl;
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

	gr.Dfs(1);

	cout << endl;
	gr.Print();
}














