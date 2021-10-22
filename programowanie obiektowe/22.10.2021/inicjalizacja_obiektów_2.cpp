#include <iostream>

using namespace std;

class Car{
public:	
	unsigned int id {10};
	string brand {"Ferrari"};
	string model {"F430"};
	
	void getData();
	
	Car(unsigned int pid=2, string pbrand="Audi", string pmodel="A6");
};

void Car::getData(){
	cout << "\nId: " << id << "\nMarka: " << brand << "\nModel: " << model;
}

Car::Car(unsigned int pid, string pbrand, string pmodel){
	id=pid;
	brand=pbrand;
	model=pmodel;
}

//Car::Car(){
//	cout << "Konstruktor bezparametrowy";
//}

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Car samochod;
	samochod.getData();
	
	Car samochod1 = Car(12, "Bugatti", "Veyron");
	samochod1.getData();
	
	return 0;
}
