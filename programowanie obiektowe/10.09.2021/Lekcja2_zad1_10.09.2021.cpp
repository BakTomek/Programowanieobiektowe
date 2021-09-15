#include <iostream>

using namespace std;;

class Rectangle{
public:
	float a, b;
	
	/*prototypy*/
	float area();
	float circumference();
	float returnArea();
	float returnCircumference();
	void showAreaAndCircumference();
	void showSideLength();
};

//definicja metody wyswietlania dlugosci bokow
void Rectangle::showSideLength(){
	cout << "\nDlugoœci boków: " << a << " " << b << endl;
}


//definicja metody obliczania pola prostokata
float Rectangle::area(){
	return a*b;
}


//definicja metody obliczania obwodu prostokata
float Rectangle::circumference(){
	return (a*2)+(b*2);
}


//definicja metody zwracania pola prostokata
float Rectangle::returnArea(){
	return area();
}

//definicja metody zwracania obwodu prostokata
float Rectangle::returnCircumference(){
	return circumference();
}


//definicja metody wyswietlania pola i obwodu
void Rectangle::showAreaAndCircumference(){
	cout << "\nDane prostok¹tu:\n" << "Pole: " << returnArea() << "\nObwód: " << returnCircumference();
}


int main(){
	
	setlocale(LC_CTYPE, "polish");
	
	Rectangle rectangle;
	
	cout << "Podaj dlugoœæ 1 boku: ";
	cin >> rectangle.a;
	cout << "Podaj dlugoœæ 2 boku: ";
	cin >> rectangle.b;
	
	rectangle.showSideLength();
	rectangle.circumference();
	rectangle.area();
	rectangle.returnArea();
	rectangle.returnCircumference();
	rectangle.showAreaAndCircumference();
	
	return 0;
}
