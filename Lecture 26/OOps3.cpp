#include<iostream>
#include<cstring>
using  namespace std;


/*
	Object:
	There are 4 Functions that are self invoked.

	1. Constructor
	2. Copy Constructor
	3. Copy Assignment Operator
	4. Destructor


	1. Constructor
*/

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

	//Default Constructor:
	Car() {
		cout << "Inside My Default Constructor" << endl;
	}

	//Constructor Overloading
	//Parameterised Constructor

	Car(char n[], string c, double m, int mo, int p) {
		cout << "Inside My Own Parameterised Constructor" << endl;
		strcpy(name, n);

		// for (int i = 0; n[i] != '\0'; i = i + 1) {
		// 	name[i] = n[i];
		// }

		condition = c;
		mileage = m;
		model = mo;
		// price = p;

		if (p > 850 and p <= 1000) {
			price = p;
		} else {
			price = 850;
		}
	}

	Car(char n[], string c1) {

	}

	//Setter:

	void set_price(double discount) {
		if (discount > 15) {
			price = 850;
		} else {
			price = 1000 * (1 - (discount / 100));
			cout << price << endl;
		}
	}

	//Getter Function:

	int get_Price() {
		return price;
	}

	//Member Function:

	void Print() {
		cout << name << endl;
		cout << condition << endl;
		cout << mileage << endl;
		cout << model << endl;
		cout << price << endl;//I am Able to access this.

		cout << "-----------------------------" << endl;
	}

};

int main() {


	Car c;
	Car d("Audi", "Bad", 118.9, 13, 2000);

	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.condition = "Very Good";

	c.mileage = 102.3;
	c.model = 1114;

	c.Print();

	d.Print();



}

