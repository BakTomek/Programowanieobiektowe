#include <iostream>

using namespace std;

struct Date {
	unsigned short int dd, mm, r;
};

class Worker{
public:
	unsigned int id {};
	string name {}, surname {};
	Date dateBirthday {};
		
	void showAllData();
	void setData(unsigned int id, string name, string surname, Date dateBirthday);
};

void Worker::showAllData(){
	cout << "Dane pracownika:\nIdentyfikator u¿ytkownika: " << id
		 << "\nImie i nazwisko: " << name << " " << surname
		 << "\nData urodzenia: " << dateBirthday.dd << "-" << dateBirthday.mm << "-" << dateBirthday.r << "r.\n";
}

void Worker::setData(unsigned int id, string name, string surname, Date dateBirthday){
	Worker::id=id;
	Worker::name=name;
	Worker::surname=surname;
	Worker::dateBirthday=dateBirthday;
}

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Worker pracownik;
	
	pracownik.setData(8, "Janusz", "Kowalski", {17, 9, 2021});
	pracownik.showAllData();
	
	return 0;
}
