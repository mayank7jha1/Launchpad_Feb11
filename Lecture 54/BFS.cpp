#include<iostream>
#include<map>
#include<list>
#include<queue>
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




	void Bfs(T scr) {
		map<T, bool>visited;
		for (pair<T, list<T>>x : mp) {
			T Node = x.first;
			visited[Node] = 0;
		}

		queue<T>q;
		q.push(scr);
		visited[scr] = 1;

		while (!q.empty()) {

			T Node = q.front();
			q.pop();

			cout << Node << " ";

			for (int Nbr : mp[Node]) {
				if (!visited[Nbr]) {
					q.push(Nbr);
					visited[Nbr] = 1;
				}
			}
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

	gr.Bfs(1);

	cout << endl;
	gr.Print();
}














