#include<iostream>
#include<climits>
#include<iomanip>
#include<list>
using  namespace std;

template<typename T>

//EdgeList:
class Graph {
	list<pair<T, T>>l;//Edgelist
public:

	void addEdge(int x, int y) {
		l.push_back({x, y});
	}

	T find_set(T node, int* parent) {
		if (parent[node] == -1) {
			return node;
		}

		//Path Compression
		return parent[node] = find_set(parent[node], parent);
	}

	void Union_set(T x, T y, int* parent, int *rank) {
		T S1 = find_set(x);
		T S2 = find_set(y);

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
	}

	//Cycle Detection

	bool IsCycle(T n) {

		//We can only take arrays when nodes are integers.
		//else take a map for this.
		int *parent = new T[n + 1];
		int *rank = new T[n + 1];

		for (int i = 0; i <= n; i++) {
			parent[i] = -1;
			rank[i] = 1;
		}

		//Iterate over the edgelist:
		for (auto edge : l) {
			int V1 = edge.first;
			int V2 = edge.second;

			int S1 = find_set(V1);
			int S2 = find_set(V2);

			if (S1 != S2) {
				//Create the edge.
				Union_set(S1, S2, parent, rank);
			} else {
				//Cycle Exist
				return true;
			}

		}
		return false;
	}

};

int main() {

}












