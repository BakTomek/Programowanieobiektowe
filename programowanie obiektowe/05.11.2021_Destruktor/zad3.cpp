#include <iostream>

using namespace std;

class Animal{
public:
	static int s_count;
	
	Animal(){
		s_count++;
		cout << "Iloœæ obiektoów: " << s_count << endl;
	}
	
	~Animal(){
		s_count--;
		cout << "Iloœæ obiektów: " << s_count << endl;
	}
};

int Animal::s_count=0;

int main(){
	setlocale(LC_CTYPE, "polish");
	
	cout << "Iloœæ obiektów " << Animal::s_count << endl;
	
	Animal dog;
	Animal cat;
	Animal horse;
	
	Animal *p_dog = new Animal;
	delete p_dog;
	
	return 0;
}
