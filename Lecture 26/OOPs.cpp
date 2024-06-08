#include<iostream>
using  namespace std;

class Car {

	//Access Modifiers: Public Private Protected
private:
	int price = 1000;

public:
	//Data Members
	char name[100];
	string condition;
	double mileage;
	int model;


	//Member Function:

	void Print() {
		cout << name << endl;
		cout << condition << endl;
		cout << mileage << endl;
		cout << model << endl;
		cout << price << endl;//I am Able to access this.
	}

};

int main() {

	/*	Object of the Class Car.
		Object of the Data Type Car.
	*/

	Car c;

	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';

	// c.price = 1000;
	c.condition = "Very Good";

	c.mileage = 102.3;
	c.model = 1114;

	c.Print();

	// cout << c.name << endl;
	// cout << c.condition << endl;
	// cout << c.mileage << endl;
	// cout << c.model << endl;
	// cout << c.price << endl;

}