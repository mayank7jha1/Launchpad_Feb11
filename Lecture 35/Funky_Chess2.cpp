#include<iostream>
using  namespace std;
const int N = 10;
int n;
int grid[N][N];
int Total_Boxes = 0;

void Input_Grid() {
	for (int i = 0; i < n; i = i + 1) {
		for (int j = 0; j < n; j = j + 1) {
			cin >> grid[i][j];

			if (grid[i][j] == 1) {
				Total_Boxes = Total_Boxes + 1;
			}
		}
	}
}

int dx[] {1, 1, 2, 2, -1, -1, -2, -2};
int dy[] {2, -2, 1, -1, 2, -2, 1, -1};

int ans = 0;

void F(int x, int y, int count) {

	ans = max(ans, count);

	for (int i = 0; i < 8; i = i + 1) {

		int next_x = x + dx[i];
		int next_y = y + dy[i];

		if (next_x >= 0 and next_x<N and next_y >= 0 and
		        next_y < N and grid[next_x][next_y] == 1) {

			grid[next_x][next_y] = 0;

			F(next_x, next_y, count + 1);

			grid[next_x][next_y] = 1;//Backtracking

		}
	}

}


int main() {
	cin >> n;
	Input_Grid();

	// (0, 0):
	grid[0][0] = 0;
	F(0, 0, 1);

	cout << Total_Boxes - ans << endl;

}







