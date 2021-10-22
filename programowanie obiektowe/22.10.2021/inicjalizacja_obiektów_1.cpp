#include <iostream>

using namespace std;

class Car{
public:	
	unsigned int id {10};
	string brand {"Ferrari"};
	string model {"F430"};
	
	void getData();
	
	Car();
	Car(unsigned int pid, string pbrand, string pmodel);
};

void Car::getData(){
	cout << "\nId: " << id << "\nMarka: " << brand << "\nModel: " << model;
}

//Car::Car(){
//	cout << "Konstruktor bezparametrowy";
//}

Car::Car(){
	id=8;
	brand="Fiat";
	model="126p";
};

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Car samochod;
	samochod.getData();
	
	Car samochod1 = Car();
	samochod1.getData();
	return 0;
}
