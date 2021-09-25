#include <iostream>

using namespace std;

class Pracownik{
public:
	string name = "Janusz";
	string surname;
	unsigned short int age;
	void showAllData(){
		cout << "\nDane pracownika: \n" << this->name << " " << this->surname;
	}
};

int main(){
	Pracownik janusz;
	janusz.surname = "Nowak";
	janusz.age = 27;
	//cout << janusz.name;
	cout << "Imie i nazwisko: " << janusz.name << " " << janusz.surname << "\n";
	cout << "Wiek: " << janusz.age << "\n\n";
	
	janusz.showAllData();

	return 0;
}

