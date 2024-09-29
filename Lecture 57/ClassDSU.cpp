#include<iostream>
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

	int find_set(int node, int* parent) {
		if (parent[node] == -1) {
			return node;
		}

		//Path Compression
		return parent[node] = find_set(parent[node], parent);
	}

	void Union_set(int x, int y, int* parent, int *rank) {
		int S1 = find_set(x, parent);
		int S2 = find_set(y, parent);

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

};

int main() {

}