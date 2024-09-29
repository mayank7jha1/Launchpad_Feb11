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

	bool dfs_helper(T node, map<T, bool>&visited, map<T, bool>&stack) {

		visited[node] = 1;
		stack[node] = 1;
		for (int nbr : mp[node]) {
			if (((visited[nbr] == 0 and
			        dfs_helper(nbr, visited, stack) == 1)) or (stack[nbr] == 1)) {
				return true;
			}
		}

		//Backtracking
		stack[node] = 0;

		return false;
	}


	bool dfs(T scr) {
		map<T, bool>visited, stack;

		// vector<T>visited, stack;
		// vector<T>visited;
		// stack<T>instack;

		for (auto x : visited) {
			visited[x.first] = 0;
		}

		return dfs_helper(scr, visited, stack);
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
	cout << gr.dfs(1);
}













