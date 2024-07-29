#include<iostream>
using  namespace std;


bool CanPlace(char board[][100], int row, int col, int n) {

	//Check in the current row :

	for (int i = 0; i < col; i = i + 1) {
		if (board[row][i] == 'Q') {
			return false;
		}
	}

	//Check in the current col :
	for (int i = 0; i < row; i = i + 1) {
		if (board[i][col] == 'Q') {
			return false;
		}
	}


	//Left Diagonal:
	int i = row, j = col;
	while (i >= 0 and j >= 0) {
		if (board[i][j] == 'Q') {
			return false;
		}
		i = i - 1;
		j = j - 1;
	}

	//Right Diagonal:
	i = row; j = col;
	while (i >= 0 and j < n) {
		if (board[i][j] == 'Q') {
			return false;
		}
		i = i - 1;
		j = j + 1;
	}

	return true;
}



int count1 = 0;
bool Solve(char board[][100], int row, int n) {

	if (row == n) {
		//You have placed n queens.
		for (int i = 0; i < n; i = i + 1) {
			for (int j = 0; j < n; j = j + 1) {
				cout << board[i][j] << " ";
			}
			cout << endl;
		}
		count1 = count1 + 1;
		cout << endl;
		return false;
	}




	for (int col = 0; col < n; col = col + 1) {

		//Can I place the queen at the
		//column  number col and current row.

		if (CanPlace(board, row, col, n) == 1) {

			board[row][col] = 'Q';
			int Small_Problem = Solve(board, row + 1, n);

			if (Small_Problem == 1) {
				return true;
			}

			//That means even though you can place queen
			//at  the current column but you arre
			//not able to find a solution by putting queen
			//at the current col that means change the
			//column and find the answer.

			//Backtracking
			board[row][col] = '.';
		}
	}

	//If I reach here: There is no solution and then just
	//return false.

	return false;
}

int main() {
	int n;
	cin >> n;

	char board[100][100];
	for (int i = 0; i < n; i = i + 1) {
		for (int j = 0; j < n; j = j + 1) {
			board[i][j] = '.';
		}
	}

	int ans = Solve(board, 0, n);
	cout << count1 << endl;

	// if (ans == 0) {
	// 	cout << "-1" << endl;
	// }


}