#include<iostream>
#include<vector>
#include<queue>
using  namespace std;

class Graph {
	//Adjacency List
	vector<pair<int, int>>*mp;

	/*
		Nodes      :       Neighbour
		(Index)    :      {Vertex,weight}

	*/
	int nodes;

public:
	Graph(int nodes) {
		this->nodes = nodes;
		mp = new vector<pair<int, int>>[nodes];
	}

	void addEdge(int x, int y, int weight) {
		mp[x].push_back({y, weight});
		mp[y].push_back({x, weight});
	}


	int Prim_MST() {

		//Weight,Vertex
		priority_queue<pair<int, int>, vector<pair<int, int>>,
		               greater<pair<int, int>>>mini;

		bool *visited = new bool[nodes] {0};

		int Minimum_Weight = 0;
		mini.push({0, 1}); //Weight,Node;

		while (!mini.empty()) {
			auto x = mini.top();
			mini.pop();

			int To_Edge = x.second;
			int weight = x.first;

			if (visited[To_Edge] == 1) {
				continue;
			}

			Minimum_Weight += weight;
			visited[To_Edge] = 1;

			for (auto nbr : mp[To_Edge]) {
				if (visited[nbr.first] == 0) {
					mini.push({nbr.second, nbr.first});
				}
			}
		}

		return Minimum_Weight;
	}
};



int main() {

}