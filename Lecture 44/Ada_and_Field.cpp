#include<iostream>
#include<set>
using  namespace std;
#define int long long



int32_t main() {

	int t;
	cin >> t;
	while (t > 0) {

		int n, m, q;
		cin >> n >> m >> q;

		//Logic:
		multiset<int>x, y, sx, sy;

		sx.insert(n);
		sy.insert(m);

		x.insert(0);
		x.insert(n);

		y.insert(0);
		y.insert(m);


		//We have a lot of Queries.
		for (int i = 0; i < q; i = i + 1) {

			int a, b;
			cin >> a >> b;

			if (a == 0) {

				//Vertical Line Marni hain.
				if (x.find(b) != x.end()) {
					//Just Print the Maximum Area.
					//Largest sx and Largest sy ka multiplication.
					int Largest_X_Segment = *(--sx.end());
					int Largest_Y_Segment = *(--sy.end());

					int area = Largest_X_Segment * Largest_Y_Segment;
					cout << area << endl;
					continue;
				}

				auto small = x.lower_bound(b);
				small--;

				auto large = x.upper_bound(b);

				int Length = (*large - *small);

				sx.erase(sx.find(Length));
				sx.insert(b - *small);
				sx.insert(*large - b);

				x.insert(b);

				int Largest_X_Segment = *(--sx.end());
				int Largest_Y_Segment = *(--sy.end());

				int area = Largest_X_Segment * Largest_Y_Segment;
				cout << area << endl;

			} else {

				if (y.find(b) != y.end()) {
					//Just Print the Maximum Area.
					//Largest sx and Largest sy ka multiplication.
					int Largest_X_Segment = *(--sx.end());
					int Largest_Y_Segment = *(--sy.end());

					int area = Largest_X_Segment * Largest_Y_Segment;
					cout << area << endl;
					continue;
				}

				auto small = y.lower_bound(b);
				small--;

				auto large = y.upper_bound(b);

				int Length = (*large - *small);

				sy.erase(sy.find(Length));
				sy.insert(b - *small);
				sy.insert(*large - b);

				y.insert(b);

				int Largest_X_Segment = *(--sx.end());
				int Largest_Y_Segment = *(--sy.end());

				int area = Largest_X_Segment * Largest_Y_Segment;
				cout << area << endl;
			}
		}

		t = t - 1;
	}



}