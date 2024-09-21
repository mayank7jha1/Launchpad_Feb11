#include<bits/stdc++.h>
using namespace std;
template<typename T>

class Graph {
	map <T, list<T>>l;
public:
	void addEdge(T x, T y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void dfs_helper(T scr, map<T, bool>&visited) {
		cout << scr << " ";
		visited[scr] = true;

		for (auto x : l[scr]) {
			if (!visited[x]) {
				dfs_helper(x, visited);
			}
		}
	}

	void dfs(T scr) {
		map<T, bool>visited;

		for (auto x : l) {
			visited[x.first] = false;
		}

		int cnt = 0;
		for (auto x : l) {
			if (!visited[x.first]) {
				cout << "Component No " << cnt << " --> ";
				dfs_helper(x.first, visited);
				cnt++;
			}
		}
		cout << endl << "Total Component : " << cnt;

	}
};



int main() {
	Graph<int>g;
	int n, m;
	cin >> n >> m;


	for (int i = 0; i < m; i++) {
		int s, t;
		cin >> s >> t;
		g.addEdge(s, t);
	}
	g.dfs(0);
}