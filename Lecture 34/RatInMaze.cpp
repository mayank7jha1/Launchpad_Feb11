#include<iostream>
using  namespace std;
int n, m;
char maze[1001][1001];
bool visited[1001][1001] = {{0}};
bool solution[1001][1001] = {{0}};

//Function(x,y): If i am able to find a path from
//x,y to target or not? : Answer can only be Yes or no?

/*

	Function(x,y): Is there a path from x,y to n-1,m-1.

	Function(x,y+1): Is there a Path from x,y+1 to n-1,m-1.

	Function(x+1,y): Is there a Path from x+1,y to n-1,m-1.


*/

bool Function(int x, int y) {

	if (x == n - 1 and y == m - 1) {
		solution[x][y] = 1;


		for (int i = 0; i < n; i = i + 1) {
			for (int j = 0; j < m; j = j + 1) {
				cout << solution[i][j] << " ";
			}
			cout << endl;
		}

		//Mujhe Current State ka Answer mil gaya.

		return true;
	}


	//Currently I am Standing at x,y and We are Resolving
	//State Function(x,y).

	if (visited[x][y] == 1) {
		return false;
	}

	//Assumption: This box is part of the solution.
	//Presumption: This box is part of my final answer.
	solution[x][y] = 1;
	visited[x][y] = 1;


	//Try to Find Aage ka rasta.

	//I will try to go in the right direction.
	//We are trying to resolve State Function(x,y).

	if (y + 1 <= m - 1 and visited[x][y + 1] == 0) {

		bool Rightans = Function(x, y + 1);
		if (Rightans == 1) {
			return true;
		}
	}

	//I will Try to go in the down direction.
	//Since We were not able to find a path from x,y+1 hence
	//we are going down.
	//Function(x,y+1) ne hume answer false diya.

	//We are trying to resolve State Function(x,y).

	if (x + 1 <= n - 1 and visited[x + 1][y] == 0) {
		bool Downans = Function(x + 1, y);
		if (Downans == 1) {
			return true;
		}
	}


	//If I am Standing Here that means. I am not able to
	//Resolve answer for the current State of Function(x,y).

	//There is no  Path from x,y to n-1,m-1.
	//Because Function(x,y+1)=0 and Function(x+1,y)=0

	//I have to remove my Presumptions about this box.
	//What were my Presumptions that this box is part of my final
	//ans.

	//Reset the original value in the solution array for this
	//co-ordinates x,y.
	solution[x][y] = 0;//Backtracking


	//Function(x,y): Does not have a path and hence I am returning
	//from here false.

	return false;
}


int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i = i + 1) {
		for (int j = 0; j < m; j = j + 1) {
			cin >> maze[i][j];

			if (maze[i][j] == 'X') {
				visited[i][j] = 1;
			}
		}
	}



	bool ans = Function(0, 0);

	if (ans == 0) {
		cout << "-1" << endl;
	}
}






