#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<climits>
#include<algorithm>
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




	void Bfs(T scr, T destination) {
		map<T, int>distance;

		for (pair<T, list<T>>x : mp) {
			T Node = x.first;
			distance[Node] = INT_MAX;
		}

		queue<T>q;
		q.push(scr);
		distance[scr] = 0;

		while (!q.empty()) {

			T Node = q.front();//Parent: Current Node
			q.pop();
			//cout << Node << " ";
			//You are going to the Nbr of Current Node.
			//Parent is : Current Node and Child is Nbr.

			for (int Nbr : mp[Node]) {

				if (distance[Nbr] == INT_MAX) {

					q.push(Nbr);

					distance[Nbr] = distance[Node] + 1;
				}
			}
		}

		// for (pair<T, list<T>>x : mp) {
		// 	cout << distance[x.first] << " ";
		// }
		// cout << endl;

		//cout << scr << " " << distance[destination] << endl;

		for (auto x : mp) {
			cout << scr << " " << x.first << " " << distance[x.first] << endl;
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

	gr.Bfs(1, 6);

	cout << endl;
	gr.Print();
}














