#include<iostream>
#include<map>
#include<list>
#include<queue>
using  namespace std;

template<typename T>
class Graph {
	map<T, list<T>>mp;//Adjacency List

public:
	void addEdge(T x, T y) {
		mp[x].push_back(y);
	}

	void DFS_Helper(T Node, map<T, int>&visited, list<int>&ordering) {
		visited[Node] = 1;

		for (auto Nbr : mp[Node]) {
			if (visited[Nbr] == 0) {
				DFS_Helper(Nbr, visited, ordering);
			}
		}
		ordering.push_front(Node);
	}


	void Dfs() {
		map<T, int>visited;
		list<T>ordering;

		for (pair<T, list<T>>x : mp) {
			T Node = x.first;
			visited[Node] = 0;
		}

		for (auto x : mp) {
			T node = x.first;
			if (!visited[node]) {
				DFS_Helper(node, visited, ordering);
			}
		}

		for (auto x : ordering) {
			cout << x << " ";
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


	void Topological_SortBfs() {
		map<T, int>indegree;
		for (auto x : mp) {
			indegree[x.first] = 0;
		}

		for (auto x : mp) {
			for (auto y : x.second) {
				indegree[y]++;
			}
		}
		queue<T>q;

		for (auto x : indegree) {
			if (x.second == 0) {
				q.push(x.first);
			}
		}

		while (!q.empty()) {

			T node = q.front();
			q.pop();

			cout << node << " ";

			for (auto nbr : mp[node]) {
				indegree[nbr]--;
				if (indegree[nbr] == 0) {
					q.push(nbr);
				}
			}
		}
	}

};

int main() {
	int n, m;
	cin >> n >> m;

	Graph<int>gr;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		gr.addEdge(x, y);
	}

	gr.Dfs();
	cout << endl;
	gr.Print();
	gr.Topological_SortBfs();
}














