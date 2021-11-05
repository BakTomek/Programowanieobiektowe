#include <iostream>

using namespace std;

class Worker{
public:
	string name;
	string surname;
	
	void getData();
	
	Worker();
	Worker(string pName, string pSurname);	
	
	//Destruktor, w klasie mozemy wywolac tylko jeden kontruktor, jest bezparametrowy.
	~Worker(){
		cout << "Wywo�anie destruktora" << endl;
	}
};

void Worker::getData(){
	cout << "Imi� i nazwisko: " << name << " " << surname << endl;
}

Worker::Worker(){
	cout << "Konstruktor domy�lny" << endl;
}

Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname}
{
	cout << "Kontruktor parametryczny" << endl;
}

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak = Worker("Janusz", "Nowak");
	nowak.getData();
	
	Worker kowalski;
	
	return 0;
}
