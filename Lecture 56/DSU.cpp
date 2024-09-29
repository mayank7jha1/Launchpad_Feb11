#include<iostream>
#include<list>
#include<cstring>
using  namespace std;

template<typename T>
class Graph {
	list<pair<T, T>>l;
public:
	void addEdge(T x, T y) {
		l.push_back({x, y});
	}

	T find_set(T node, int *parent) {
		if (parent[node] == -1) {
			return node;
		}

		//Path Compression.
		return parent[node] = find_set(parent[node], parent);
	}

	void union_set(int x, int y, int *parent, int *rank) {

		//x,y:
		int SuperParent_x = find_set(x, parent);
		int SuperParent_y = find_set(y, parent);

		if (SuperParent_x != SuperParent_y) {

			if (rank[SuperParent_x] < rank[SuperParent_y]) {
				parent[SuperParent_x] = SuperParent_y;
				rank[SuperParent_y] += rank[SuperParent_x];
			} else {
				parent[SuperParent_y] = SuperParent_x;
				rank[SuperParent_x] += rank[SuperParent_y];
			}
		}
	}

	bool Iscycle(int n) {

		int *parent = new int[n + 1]; //SuperParent
		int *rank = new int[n + 1];

		for (int node = 0; node <= n; node++) {
			parent[node] = -1;
			rank[node] = 1;
		}


		//Iterate over the Edgelist:

		for (pair<T, T> edge : l) {
			int x = edge.first;
			int y = edge.second;

			int SuperParent_x = find_set(x, parent);
			int SuperParent_y = find_set(y, parent);

			if (SuperParent_x != SuperParent_y) {
				//Abhi Tak koi Cycle nahi hain.
				union_set(x, y, parent, rank);
			} else {
				return true;
			}
		}

		for (int i = 1; i <= n; i++) {
			cout << parent[i] << " ";
		}
		cout << endl;
		return false;
	}

	void Print() {
		for (auto x : l) {
			cout << x.first << " " << x.second << endl;
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

	gr.Print();
	cout << endl;


	//Cycle Detection Using DSU:
	cout << gr.Iscycle(n) << endl;
}











