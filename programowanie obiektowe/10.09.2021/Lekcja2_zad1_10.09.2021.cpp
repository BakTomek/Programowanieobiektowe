#include <iostream>

using namespace std;;

class Rectangle{
public:
	float a, b, Area, Circumference;
	
	void area();
	void circumference();
	void showAreaAndCircumference();
	void showSideLength();
};

//definicja metody wyswietlania dlugosci bokow
void Rectangle::showSideLength(){
	cout << "\nDlugosci bokow: " << a << " " << b << endl;
}


//definicja metody obliczania pola prostokata
void Rectangle::area(){
	Area=a*b;
}


//definicja metody obliczania obwodu prostokata
void Rectangle::circumference(){
	Circumference=(a*2)+(b*2);
}


//definicja metody wyswietlania pola i obwodu
void Rectangle::showAreaAndCircumference(){
	cout << "\nDane prostokatu:\n" << "Pole: " << Area << "\nObwod: " << Circumference;
}


int main(){
	
	Rectangle rectangle;
	
	cout << "Podaj dlugosc 1 boku: ";
	cin >> rectangle.a;
	cout << "Podaj dlugosc 2 boku: ";
	cin >> rectangle.b;
	
	rectangle.showSideLength();
	rectangle.circumference();
	rectangle.area();
	rectangle.showAreaAndCircumference();
	
	return 0;
}
