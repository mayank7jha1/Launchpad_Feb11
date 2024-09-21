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

	bool DFS_Helper(T scr, map<T, bool>&visited, T Parent) {
		visited[scr] = 1;

		for (auto Nbr : mp[scr]) {
			if (visited[Nbr] == 0) {
				bool cycle = DFS_Helper(Nbr, visited, scr);
				if (cycle == 1) {
					return true;
				}
			} else if (Nbr != Parent) {
				return true;
			}
		}
		return false;
	}


	bool Dfs(T scr) {
		map<T, bool>visited;
		for (pair<T, list<T>>x : mp) {
			T Node = x.first;
			visited[Node] = 0;
		}

		return DFS_Helper(scr, visited, -1);
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

	cout <<	gr.Dfs(1);

	cout << endl;
	gr.Print();
}














