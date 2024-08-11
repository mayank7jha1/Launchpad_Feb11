#include<iostream>
#include<algorithm>
#include<queue>
#include<set>
using  namespace std;
const int N = 1e5 + 10;
int t;
int n, d;
int Sadness[N], Lectures[N], Arrival_Day[N];

// class DSA {
// public:
// 	int index;
// 	int  Sadness;

// 	DSA() {
// 		index = 0;
// 		Sadness = 0;
// 	}
// };

// bool cmp(DSA x, DSA y) {

// 	if (x.Sadness > y.Sadness) {
// 		return true;
// 	} else {
// 		return false;
// 	}
// }


int Solve() {

	//DSA a[N];
	cin >> n >> d;

	//{Sadness,i}
	priority_queue<pair<int, int>>pq;

	for (int i = 0; i < n; i = i + 1) {
		cin >> Arrival_Day[i] >> Lectures[i] >> Sadness[i];

		// a[i].index = i;
		// a[i].Sadness = Sadness[i];

		pq.push({Sadness[i], i});
	}

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << Arrival_Day[i] << " " << Lectures[i] << " " <<
	// 	     Sadness[i] << endl;
	// }

	// sort(a, a + n, cmp);

	// for (int i = 0; i < n; i = i + 1) {
	// 	cout << a[i].index << " " << a[i].Sadness << endl;
	// }


	// cout << endl << endl << endl << endl;

	// while (!pq.empty()) {
	// 	cout << pq.top().second << " " << pq.top().first << endl;
	// 	pq.pop();
	// }

	set<int>Available_Days;

	for (int i = 1; i <= d; i = i + 1) {
		Available_Days.insert(i);
	}

	// cout << endl;
	// for (auto x : Available_Days) {
	// 	cout << x << " ";
	// }

	int Lectures_Taken[N] {0};

	while (!pq.empty()) {

		pair<int, int> Dukhi = pq.top();

		int index = Dukhi.second;
		int S = Dukhi.first;

		pq.pop();

		int Lecture_Lene_Kitne_Hain = Lectures[index];

		int Ideal_Start_Day = Arrival_Day[index];

		int Ideal_Ending_Day = Arrival_Day[index] +
		                       Lecture_Lene_Kitne_Hain - 1;


		for (int i = Ideal_Start_Day; i <= Ideal_Ending_Day; i = i + 1) {

			set<int>::iterator it = Available_Days.lower_bound(i);
			//cout << (*it) << endl;

			if (it == Available_Days.end()) {
				break;
			} else {
				Lectures_Taken[index] += 1;
				Available_Days.erase(it);
			}
		}
	}

	int Total = 0;
	for (int i = 0; i < n; i = i + 1) {
		Total += ((Lectures[i] - Lectures_Taken[i]) * Sadness[i]);
	}


	return  Total;
}

int main() {
	cin >> t;

	while (t > 0) {
		cout << Solve() << endl;
		t = t - 1;
	}

}