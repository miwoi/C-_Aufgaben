#include "Aufgabe_2b.h"

using namespace::std;

int main(){


    
    int Anzahl = 0;
    cout << "Größe des Musters: "; 
    cin >> Anzahl; 
    PrintFigure(Anzahl); 
    


}

void printStars(int n)
{
    int i = 0; 
    while(i < n){

        std::cout << "*";
        i++; 
    }

    std::cout << endl; 

}

void PrintFigure(int MusterGroesse)
{

    int AktuelleAnzahl = MusterGroesse;
    int MinimaleAnzahl = 1;
    int MaximaleAnzahl = MusterGroesse; 

    while (AktuelleAnzahl >= MinimaleAnzahl){

        printStars(AktuelleAnzahl);

        AktuelleAnzahl--; 
    }

    AktuelleAnzahl = AktuelleAnzahl + 2; 

    while (AktuelleAnzahl <= MaximaleAnzahl)
    {

        printStars(AktuelleAnzahl);

        AktuelleAnzahl++;
    }
}
