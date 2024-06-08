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


	2. Copy Constructor:

	Default Copy Contructor uses Shallow Copy:


	Shallow Copy and Deep Copy.
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
	char *color;//Dynamic Array

	//Default Constructor:
	Car() {
		cout << "Inside My Default Constructor" << endl;
	}

	//Constructor Overloading
	//Parameterised Constructor

	Car(char n[], string c, double m, int mo, int p, char* c1) {
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

		color = new char[100];
		strcpy(color, c1);
	}

	Car(char n[], string c1) {

	}


	//Copy Constructor
	Car(Car &x) {
		cout << "Inside My Own Copy Constructor" << endl;
		strcpy(name, x.name);

		condition = x.name;
		mileage = x.mileage;
		model = x.model;
		// price = p;

		price = x.price;

		// //Shallow Copy
		// color = x.color;

		//Deep Copy
		color = new char[100];

		// cout << color << endl;
		cout << (void*)color << endl;
		cout << (void*)x.color << endl;
		strcpy(color, x.color);
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
		cout << color << endl;
		cout << "-----------------------------" << endl;
	}

};

int main() {
// k
// --

	Car c;
	Car d("Audi", "Bad", 118.9, 13, 2000, "Black");


	Car e(d);



	// c.name[0] = 'B''
	;
	// c.name[1] = 'M';
	// c.name[2] = 'W';
	// c.condition = "Very Good";

	// c.mileage = 102.3;
	// c.model = 1114;

	//c.Print();

	//d.Print();

	e.name[0] = 'Z';
	e.color[0] = 'Z';

	Car h;

	h = e;//Shallow Copy

	e.Print();
	d.Print();




}



/*

	//Copy Constructor : it is used to copy one
	//object to another

	Car(Car l){

	}


	Pass by value ka matlab hain:
	aapki d ki value l me copy hogi.
	d and l are objects.

	Jab main d ki value l me copy kar raha hounga
	toh kaise karunga using copy constructor.

	but kya abhi tak copy constructor bann
	chuka hain?

	Agar aapne d ko l me copy nahi kiya
	to copy constructor nahi banega but agar
	copy constructor nahi hai to d ko l me
	copy karu kaise?

	Car e(d);Pass By value:



*/