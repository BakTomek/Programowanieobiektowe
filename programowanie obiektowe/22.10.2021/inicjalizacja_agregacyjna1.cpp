#include <iostream>

using namespace std;

class Car{
public:	
	unsigned int id;
	string brand;
	string model;
	
	void getData();
	Car();
	Car(unsigned int pid, string pbrand, string pmodel);
};

void Car::getData(){
	cout << "\nId: " << id << "\nMarka: " << brand << "\nModel: " << model;
}

Car::Car(){
	id=0;
	brand="Domyœlna marka";
	model="Domyœlny model";
	cout << "Kontruktor domyœlny";
}

Car::Car(unsigned int pid, string pbrand, string pmodel){
	id=pid;
	brand=pbrand;
	model=pmodel;
	cout <<"\nKontruktor parametryczny";
}

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Car samochod = Car(8, "Ferrari", "F240");
	samochod.getData();
	
	Car samochod1 = Car{9, "Bugatti", "Veyron"};
	samochod1.getData();
	
	return 0;
}
