#include <iostream>

using namespace std;

struct Date{
	unsigned short int d, m, rrrr;
};

struct Student{
	string name, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5];
};

int main(){
	
	Student student{"Janusz", "Nowak", 10, {17,9,2021}, {5,2,5,4,3}};
	
	//cout << student.id;
	
	setlocale(LC_CTYPE, "polish");
	
	cout << "Imiê i nazwisko: " << student.name << " " << student.surname
		 << "\nIdentyfikator u¿ytkownika: " << student.id 
		 << "\nData urodzenia: " << student.dateBirthday.d
		 << "-" << student.dateBirthday.m << "-" << student.dateBirthday.rrrr << "r."
		 << "\nOceny z informatyki: " << "\nPierwsza ocena: " << student.gradeInformatics[0] 
		 << "\nDruga ocena: " << student.gradeInformatics[1]
		 << "\nTrzecia ocena: " << student.gradeInformatics[2]
		 << "\nCzwarta ocena: " << student.gradeInformatics[3]
		 << "\nPi¹ta ocena: " << student.gradeInformatics[4] << endl;
	
	return 0;
}
