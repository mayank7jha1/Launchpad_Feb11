#include<iostream>
#include<vector>
using  namespace std;

class DSU {
	int *parent;
	int *rank;
	int components;

public:
	DSU(int n) {
		parent = new int[n + 1];
		rank = new int[n + 1];
		components = n;
	}

	int find_set(int node) {
		if (parent[node] == -1) {
			return node;
		}

		//Path Compression
		return parent[node] = find_set(parent[node]);
	}

	void Union_set(int x, int y) {
		int S1 = find_set(x);
		int S2 = find_set(y);

		if (S1 != S2) {
			//Union  by Rank
			if (rank[S1] < rank[S2]) {
				parent[S1] = S2;
				rank[S2] += rank[S1];
			} else {
				parent[S2] = S1;
				rank[S1] += rank[S2];
			}
		}

		components--;
	}
};

class Graph {
	// list<pair<pair<int, int>, int>>edgelist;
	// list<vector<int>>edgelist;
	vector<vector<int>>edgelist;
	int nodes;

public:
	Graph(int nodes) {
		// nodes = n;
		this->nodes = nodes;
	}

	void addEdge(int x, int y, int weight) {
		edgelist.push_back({weight, x, y});
	}


	int Kruskal_Mst() {
		DSU s(nodes);
		sort(edgelist.begin(), edgelist.end());

		int Minimum_Weight = 0;
		for (vector<int> edge : edgelist) {

			int weight = edge[0];
			int V1 = edge[1];
			int V2 = edge[2];

			if (s.find_set(V1) != s.find_set(V2)) {
				s.Union_set(V1, V2);
				Minimum_Weight += weight;
			}
		}

		return Minimum_Weight;
	}
};

int main() {

}