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
	}

};

int main() {


	Car c;

	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.condition = "Very Good";

	c.mileage = 102.3;
	c.model = 1114;

	c.set_price(10);
	c.Print();

	cout << c.get_Price() << endl;



}



// int / int--->int;
//double/double-->double;

//double/int---> int/double--->double