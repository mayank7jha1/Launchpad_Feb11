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

	bool DFS_Helper(T Node, T Parent, map<T, int>&visited, int color) {

		visited[Node] = color;

		for (auto Nbr : mp[Node]) {
			if (visited[Nbr] == 0) {
				int Small_Ans = DFS_Helper(Nbr, Node, visited, 3 - color);
				if (Small_Ans == 0) {
					return false;
				}

			} else if (Nbr != Parent and visited[Nbr] == color) {
				return false;
			}
		}

		return true;
	}


	bool Dfs(T scr) {
		map<T, int>visited;
		for (pair<T, list<T>>x : mp) {
			T Node = x.first;
			visited[Node] = 0;
		}

		int color = 1;
		return DFS_Helper(1, -1, visited, color);

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














