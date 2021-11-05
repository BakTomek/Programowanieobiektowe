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
		cout << "Wywo³anie destruktora" << endl;
	}
};

void Worker::getData(){
	cout << "Imiê i nazwisko: " << name << " " << surname << endl;
}

Worker::Worker(){
	cout << "Konstruktor domyœlny" << endl;
}

Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname}
{
	cout << "Kontruktor parametryczny" << endl;
}

void createObjectWorker(){
	Worker worker;
	worker.getData();
}

int main(){
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak = Worker("Janusz", "Nowak");
	nowak.getData();
	
	Worker kowalski;
	
	createObjectWorker();
	
	cout << "\nWskaŸnik\n";
	Worker *p_kowalski = new Worker("Jan", "Kowalski");
	p_kowalski->getData();
	delete p_kowalski;	
	return 0;
}
