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

/*

Current Co - ordinate is : (x, y):

Next Co - ordinate Could be:
	(x + dx[i])
	(y + dy[i])

	where i goes from 0 to 7 index : 8 Paths are there.


I want to Print all the next co - ordinates:
	CO = x, y;
	for (int i = 0; i < 8; i = i + 1) {

	cout << x + dx[i] << " " << y + dy[i] << endl;
}

*/

/*

	Count: That tells me Current Path me
	kitne boxes ko maine travel kiya.


	You want to maximise this number: Count.

	Min number of Boxes where I Can Trave not able to
	in a single path = Total Boxes - Maximum number of
	Boxes where I was able to travel in a Sinlge Path.

	ans: Maximum number of Boxes where i was able
	to travel across all the paths.

	F(x,y,count): (x+dx[i],y+dy[i]):F(x+dx[i],y+dy[i],count+1);

	Where I goes from 0 to 7 index.


	When I am not able to move forward:
	answer variable to update kardo.

	ans=max(ans,count).


	Whenever I go to box I will make it zero and ask
	recursion to do the rest.

	and Whenever I return from the previous state
	or box i will make it 1 again so as i am able to
	visit this box from any other path.

*/

int main() {
	Input_Grid();

	// (0, 0):


}







