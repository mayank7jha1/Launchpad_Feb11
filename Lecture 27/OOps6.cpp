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


	4. Destructor
*/

class Car {

	//Access Modifiers: Public Private Protected
private:
	int price = 1000;

public:
	//Data Members
	char name[100] = {"BMW"};
	string condition;
	double mileage;
	int model;
	char *color = nullptr; //Dynamic Array

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


	//Copy Assignment Operator:
	//Operator Overloading



	void operator=(Car &x) {
		cout << "Inside My Own Copy Assignment Operator" << endl;
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
		// cout << (void*)color << endl;
		// cout << (void*)x.color << endl;
		strcpy(color, x.color);
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

	~Car() {
		cout << "Inside My Own Destructor " << name << endl;
		if (color != NULL) {
			delete[]color;
		}
	}

};

int main() {


	Car c;


	Car d("Audi", "Bad", 118.9, 13, 2000, "Black");


	Car e(d);
	e.name[0] = 'Z';

	Car m;//Default Constructor
	m = d;//Copy Assignment Operator (Shallow Copy)
	m.name[0] = 'T';

	// e.name[0] = 'Z';
	// e.color[0] = 'Z';


	// e.Print();
	// d.Print();
	// m.Print();

	// m.color[0] = 'Z';

	// m.Print();
	// d.Print();



	// int x;

	// Car o;


}



















