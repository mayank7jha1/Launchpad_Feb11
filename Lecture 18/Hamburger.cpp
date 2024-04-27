#include<iostream>
#include<cstring>

using  namespace std;
#define int long long

int32_t main() {

	char ch[101];
	cin >> ch;

	int n = strlen(ch);//This is a Function that returns/gives you
	//the length of the character array.

	int nb, ns, nc;
	cin >> nb >> ns >> nc;

	int pb, ps, pc;
	cin >> pb >> ps >> pc;

	int r;
	cin >> r;


	//Define the search space.
	int s = 0;
	int e = 1e13; // 1*10^13 = 10000000000000

	int ans = -1;//Maximum Hamburger you can make;

	//I will first calculate sb,ss,sc
	int sb = 0, ss = 0, sc = 0;


	//I am Iterating over the character array and saying
	//jo character hain uske according sb,ss,sc ko bada do.

	for (int i = 0; i < n; i = i + 1 ) {

		if (ch[i] == 'B') {

			sb = sb + 1;

		} else if (ch[i] == 'S') {

			ss = ss + 1;

		} else {

			sc = sc + 1;
		}
	}


	while (s <= e) {

		int mid = (s + e) / 2;

		/*
			Mid Hamburger ko banane me kitna paisa lagta hain?

			Mid amount of hamburger me jo extra bread kharidoge uska
			paisa+ Extra sausage ka paisa and cheese ka paisa.

		*/

		int BKP = ((mid * sb - nb) * pb);

		if (BKP < 0) {
			BKP = 0;
		}

		int SKP = ((mid * ss - ns) * ps);

		if (SKP < 0) {
			SKP = 0;
		}

		int CKP = ((mid * sc - nc) * pc);

		if (CKP < 0) {
			CKP = 0;
		}

		//Paisa Required to make mid hamburger = PR.
		int PR = BKP + SKP + CKP;

		if (PR <= r) {
			//I can make mid amount of hamburger.
			//This can be a potential answer.
			ans = mid;
			s = mid + 1;

		} else {

			e = mid - 1;

		}
	}

	cout << ans << endl;

}





