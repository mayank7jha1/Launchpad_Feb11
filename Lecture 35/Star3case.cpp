#include<iostream>
#include<climits>

using  namespace std;
#define int long long

int n;
int *a, *visited;
int ans = INT_MAX;//Out of all the paths min step path value is stored in answer.

void Stair(int i, int count) {

	if (i == n) {
		ans = min(ans, count);
		return;
	}



	visited[i] = 1;

	/*
		From the current stair i can either go to
		ith stair or i+a[i] stair.
	*/

	if (i + 1 <= n and visited[i + 1] == 0) {
		Stair(i + 1, count + 1);
	}

	if (i + a[i] <= n and i + a[i] >= 0 and visited[i + a[i]] == 0) {
		Stair(i + a[i], count + 1);
	}

	visited[i] = 0;//backtracking

}


int32_t main() {

	int t;
	cin >> t;

	int i = 1;

	while (i <= t) {


		cin >> n;

		a = new int[n];
		visited = new int[n] {0};

		for (int i = 0; i < n; i = i + 1) {
			cin >> a[i];
		}

		//Count: Current Path me kitne steps lage.
		Stair(0, 0);

		if (ans == INT_MAX) {
			cout << -1 << endl;
		} else {
			cout << ans << endl;
		}

		ans = INT_MAX;
		i = i + 1;
	}
}







