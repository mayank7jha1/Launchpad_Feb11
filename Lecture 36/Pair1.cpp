#include<iostream>
#include"Pair.h"
#include<utility>
using  namespace std;

int main() {
	Pair<string, int>p;
	p.first = "Mayank";
	p.second = 789;


	Pair<string, int>p2("Samyak", 777);


	cout << p.first << " " << p.second << endl;
	cout << p2.first << " " << p2.second << endl;


	pair<string, int>p3;

	p3.first = "Rahul";
	p3.second = 114;

	cout << p3.first << " " << p3.second << endl;


	pair<string, int>p4 = p3;

	//Direct List Initialisation (Faster)
	pair<string, int>p5{"Atul", 9880};

	//Copy List Initialisation
	pair<string, int>p6 = {"Rohit", 11};


	pair<string, int>p7;

	p7 = {"Aman", 111};

	p7 = make_pair("Sarthak", 9999);



}





















