#include<iostream>
using  namespace std;


bool CanPlace(char board[][9], int x, int y, char ch) {


	//Check 1: We are checking the current row.
	for (int i = 0; i < 9; i = i + 1) {
		if (board[x][i] == ch) {
			return false;
		}
	}

	//Check 2: We are checking the current column.
	for (int i = 0; i < 9; i = i + 1) {
		if (board[i][y] == ch) {
			return false;
		}
	}

	//Check 3:  We are checking the current Submatrix.
	int sx = (x / 3) * 3;
	int sy = (y / 3) * 3;


	for (int i = sx; i < sx + 3; i = i + 1) {
		for (int j = sy; j < sy + 3; j = j + 1) {
			if (board[i][j] == ch) {
				return false;
			}
		}
	}

	return true;
}



bool Solve(char board[][9], int x, int y) {

	if (x == 9) {
		return true;
	}

	if (y == 9) {
		return Solve(board, x + 1, 0);
	}

	//Currently We are at the co ordinate: (0,0)-->(x,y)
	if (board[x][y] != '.') {
		return Solve(board, x, y + 1);
	} else {

		for (char ch = '1'; ch <= '9'; ch = ch + 1) {
			if (CanPlace(board, x, y, ch) == 1) {
				//We Are assuming we can put the current no at x,y.
				board[x][y] = ch;
				bool small_ans = Solve(board, x, y + 1);
				if (small_ans == 1) {
					return true;
				}
			}
		}
	}

	//If I am Standing here that means Function  Call is not over
	//that means small_ans is not true for any value you are
	//trying to put on x,y.
	board[x][y] = '.';//Backtracking
	return false;
}


int main() {

	char board[9][9];
	for (int i = 0; i < 9; i = i + 1) {
		for (int j = 0; j < 9; j = j + 1) {
			cin >> board[i][j];
		}
	}

	bool ans = Solve(board, 0, 0);

	if (ans == 0) {
		cout << "-1" << endl;
	}

	for (int i = 0; i < 9; i = i + 1) {
		for (int j = 0; j < 9; j = j + 1) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}

}



