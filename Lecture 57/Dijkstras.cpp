#include<iostream>
#include<unordered_map>
#include<list>
#include<set>
#include<vector>
#include<climits>
using  namespace std;

template<typename T>
class Graph {
	unordered_map < T, list<pair<T, T>>>mp;
public:
	void addEdge(T x, T y, int weight) {
		mp[x].push_back({y, weight});
		mp[y].push_back({x, weight});
	}


	void Dijkstras(T scr) {
		unordered_map<T, int>distance;
		set<pair<int, int>>s;

		for (auto x : mp) {
			distance[x.first] = INT_MAX;
		}

		distance[scr] = 0;
		s.insert({0, scr});

		while (!s.empty()) {

			auto p = *(s.begin());
			s.erase(s.begin());

			T node = p.second;
			T parent_weight = p.first;

			for (auto nbr : mp[node]) {
				int edge_weight = nbr.second.second;

				if (distance[nbr.first] > parent_weight + edge_weight) {

					auto f = s.find({distance[nbr.first], nbr.first});

					if (f != s.end()) {
						s.erase(f);
					}

					distance[nbr.first] = parent_weight + edge_weight;
					s.insert({distance[nbr.first], nbr.first});
				}
			}
		}

		//distance[node]: shortest distance from scr
	}
};


int main() {

}