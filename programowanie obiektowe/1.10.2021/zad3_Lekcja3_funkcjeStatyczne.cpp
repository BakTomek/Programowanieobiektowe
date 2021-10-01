#include <iostream>

using namespace std;

class School {
public:
	static string s_school;
	static string s_jobPosition;
	
	string name;
	string surname;
	
	void showData();
	void setNameSurname(string name, string surname);
	
	static string s_getSchool();
	static void s_setSchool(string pSchool){
		s_school=pSchool;	
	};
};

string School::s_school="CDV";
string School::s_jobPosition="Student";

void School::showData(){
	cout << "Imiê i nazwisko: " << name << " " << surname;
}

void School::setNameSurname(string pName, string pSurname){
	name=pName;
	surname=pSurname;
}

string School::s_getSchool(){
	return s_school;
}


int main(){
	setlocale(LC_CTYPE, "polish");
	
	School kowal;
	
	cout << School::s_school << endl;
	cout << School::s_jobPosition << endl;
	
	kowal.setNameSurname("Jan", "Kowal");
	kowal.showData(); //9:00!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	cout << endl;
	
	School::s_jobPosition = "Wyk³adowca";
	cout << School::s_jobPosition << endl;
	kowal.s_jobPosition = "Dziekan";
	cout << kowal.s_jobPosition << endl;
	cout << School::s_jobPosition << endl << endl << endl;
	
	cout << School::s_getSchool() << endl;
	School::s_setSchool("ZSK");
	cout << kowal.s_school << endl;
	
	return 0;
}
