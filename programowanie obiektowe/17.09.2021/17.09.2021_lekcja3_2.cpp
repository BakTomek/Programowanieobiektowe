#include <iostream>

using namespace std;

struct Date {
	unsigned short int dd, mm, rrrr;
};

class Worker{
public:
	unsigned int id {};
	string name {}, surname {};
	Date dateBirthday {};
		
	void showAllData();
	void setData(unsigned int id, string name, string surname, unsigned short int dd, unsigned short int mm, unsigned short int rrrr);
};

void Worker::showAllData(){
	cout << "Dane pracownika:\nIdentyfikator u¿ytkownika: " << id
		 << "\nImiê i nazwisko: " << name << " " << surname
		 << "\nData urodzenia: " << dateBirthday.dd << "-" << dateBirthday.mm << "-" << dateBirthday.rrrr << "r.\n";
}

void Worker::setData(unsigned int id1, string name1, string surname1, unsigned short int dd1, unsigned short int mm1, unsigned short int rrrr1){
	id=id1;
	name=name1;
	surname=surname1;
	dateBirthday.dd=dd1;
	dateBirthday.mm=mm1;
	dateBirthday.rrrr=rrrr1;
}

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Worker pracownik;
	
	pracownik.setData(8, "Janusz", "Kowalski", 17, 9, 2021);
	pracownik.showAllData();
	
	return 0;
}
