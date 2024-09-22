#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<climits>
using  namespace std;

/*
	WE can find the common node in every cycle?
	Can We do it Efficiently?

	Longest Cyle in a Graph: I have to teach:
	Dp on Graph.
*/


vector<int>gr[100005];

void Bfs(int scr, int n, int &ans) {

	/*
		Distance[x] = Distance of x from Scr Node.
	*/

	vector<int>Distance(n + 1, INT_MAX);

	queue<int>q;
	q.push(scr);
	Distance[scr] = 0;

	while (!q.empty()) {

		int Node = q.front();
		q.pop();

		for (int Nbr : gr[Node]) {
			if (Distance[Nbr] == INT_MAX) {

				q.push(Nbr);
				Distance[Nbr] = Distance[Node] + 1;

			} else if (Distance[Nbr] >= Distance[Node]) {

				/*
					This is A backedge: This Current Node
					Nbr is not a Parent of Node.
				*/

				int Current_Cyle_Distance = Distance[Node] + Distance[Nbr] + 1;
				ans = min(ans, Current_Cyle_Distance);
			}
		}
	}
}


/*
	You are Checking For a Backedge:

	Node Should be Visited and Current Node Should not
	be the Parent.
*/


int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}

	int ans = n + 1;//Length of the Shortest Cycle.


	for (int i = 1; i <= n; i++) {
		Bfs(i, n, ans);
	}


	if (ans == n + 1) {
		cout << "No Cycle Found" << endl;
	} else {
		cout << ans << endl;
	}

}



/*
		Node    Neighbours:




*/














