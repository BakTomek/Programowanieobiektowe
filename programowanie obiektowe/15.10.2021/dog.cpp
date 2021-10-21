#include <iostream>

using namespace std;

class Dog{
public:
    string color;
    string eyeColor;
    string specie;
    unsigned short int height;
    unsigned short int length;
    unsigned short int weight;

    unsigned short int choice;

    void sit();
    void layDown();
    void shake();
    void come();
    void getData();
    void askChoice();

    Dog(string);
    Dog(string, string);
    Dog(string, string, string);
    Dog(string, string, string, int);
    Dog(string, string, string, int, int);
    Dog(string, string, string, int, int, int);
};

void Dog::askChoice(){
    cout << "\nPodaj komendę dla psa: (Wpisz numer)";
    cout << "\n1.Siad" << "\n2.Leżeć" << "\n3.Machaj" << "\n4.Przyjdź" << endl;
    cin >> choice;
}
void Dog::sit(){
    cout << "\nPies siada.";
}
void Dog::layDown(){
    cout << "\nPies kładzie się.";
}
void Dog::shake(){
    cout << "\nPies macha ogonem.";
}
void Dog::come(){
    cout << "\nPies przychodzi.";
}

void Dog::getData(){
    cout << "\nKolor: " << color << "\nKolor oczu: " << eyeColor << "\nRasa: " << specie << "\nWysokosć: "
    << height << " inches" << "\nDługość: " << length << " inches" << "\nWaga: " << weight << " pounds";
}

Dog::Dog(string pcolor){
    color=pcolor;
}

Dog::Dog(string pcolor, string peyeColor){
    color=pcolor;
    eyeColor=peyeColor;
}

Dog::Dog(string pcolor, string peyeColor, string pspecie){
    color=pcolor;
    eyeColor=peyeColor;
    specie=pspecie;
}

Dog::Dog(string pcolor, string peyeColor, string pspecie, int pheight){
    color=pcolor;
    eyeColor=peyeColor;
    specie=pspecie;
    height=pheight;
}

Dog::Dog(string pcolor, string peyeColor, string pspecie, int pheight, int plength){
    color=pcolor;
    eyeColor=peyeColor;
    specie=pspecie;
    height=pheight;
    length=plength;
}

Dog::Dog(string pcolor, string peyeColor, string pspecie, int pheight, int plength, int pweight){
    color=pcolor;
    eyeColor=peyeColor;
    specie=pspecie;
    height=pheight;
    length=plength;
    weight=pweight;
}


int main(){
    setlocale(LC_CTYPE, "polish");

    Dog rayne("Gray, White, Black", "Blue and Brown", "Golden retriewer", 18, 36, 30);

    rayne.getData();
    rayne.askChoice();

    switch(rayne.choice){
        case 1:
            rayne.sit();
            break;
        case 2:
            rayne.layDown();
            break;
        case 3:
            rayne.shake();
            break;
        case 4:
            rayne.come();
            break;
        default:
            cout << "Pies nic nie zrobił.";
            break;
    }


    return 0;
}
