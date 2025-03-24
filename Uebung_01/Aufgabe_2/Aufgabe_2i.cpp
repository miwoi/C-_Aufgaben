#include "Aufgabe_2i.h"

using namespace::std; 

int main(){

    struct Banane {

        int Gewicht = 200; 
        float Preis = 1.5; 

    }; 

    struct Apfel {

        int Gewicht = 150; 
        float Preis = 0.75;

    }; 

    struct Wassermelone {

        int Gewicht = 1000; 
        float Preis = 4;

    }; 

    Banane Banane1; 
    std::cout << "Gewicht einer Banane: " << Banane1.Gewicht << "g" << endl; 
    std::cout << "Preis einer Banane: " << Banane1.Preis << "€" << endl;  

}