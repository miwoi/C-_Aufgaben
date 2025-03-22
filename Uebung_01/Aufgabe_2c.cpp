#include "Aufgabe_2c.h"

using namespace::std;

int main()
{

    int Anzahl = 0;
    Orientierung Angabe;
    bool Wiederholung = true; 
    std::string eingabe;
    

    while (Wiederholung){

        bool Ueberpruefung = true;

        while (Ueberpruefung){

            int MaximaleMusterBreite = 80;
            int MinimaleMusterBreite = 1; 

            cout << "Größe des Musters: ";
            cin >> Anzahl;

            if (Anzahl > MaximaleMusterBreite){

                Ueberpruefung = true; 

            }
            else if (Anzahl <= MinimaleMusterBreite){

                Ueberpruefung = true; 
            }
            else {

                Ueberpruefung = false; 

            }
        }
        
        Ueberpruefung = true; 

        while (Ueberpruefung){
            
            cout << "Links- oder Rechts orientiert? ('Rechts' oder 'Links'): ";
            cin >> eingabe;

            if (eingabe == "Rechts"){
                Ueberpruefung = false; 
            }
            else if (eingabe == "Links"){
                Ueberpruefung = false; 
            }
            else {
                Ueberpruefung = true; 
            }
        }
        
        Angabe = stringZuOrientierung(eingabe);
        
        

        Wiederholung = printFigure(Anzahl, Angabe); 

    }
}

Orientierung stringZuOrientierung(std::string EingegebeneOrientierung){

    Orientierung Ausgabe; 

    if(EingegebeneOrientierung == "Links"){

        Ausgabe = Orientierung::Links; 
    }  
    else if(EingegebeneOrientierung == "Rechts"){

        Ausgabe = Orientierung::Rechts; 
    }

    return Ausgabe; 
}



bool printFigure(int MusterGroesse, Orientierung Angabe)
{

    bool Rückgabewert = false; 
    int AktuelleAnzahl = MusterGroesse;
    int MinimaleAnzahl = 1;
    int MaximaleAnzahl = MusterGroesse;


    if(Angabe == Links){

        while (AktuelleAnzahl >= MinimaleAnzahl)
        {
            printStars(AktuelleAnzahl);
            AktuelleAnzahl--;
        }

        AktuelleAnzahl = AktuelleAnzahl + 2;

        while (AktuelleAnzahl <= MaximaleAnzahl)
        {
            printStars(AktuelleAnzahl);
            AktuelleAnzahl++;
        }

        Rückgabewert = false; 

    }
    else if (Angabe == Rechts){

        int AnzahlSpaces = MinimaleAnzahl; 

        while (AktuelleAnzahl >= MinimaleAnzahl)
        {
            printSpaces(AnzahlSpaces); 
            printStars(AktuelleAnzahl);

            AktuelleAnzahl--;
            AnzahlSpaces++; 
        }

        AktuelleAnzahl = AktuelleAnzahl + 2;
        AnzahlSpaces = AnzahlSpaces - 2; 

        while (AktuelleAnzahl <= MaximaleAnzahl)
        {
            printSpaces(AnzahlSpaces); 
            printStars(AktuelleAnzahl);

            AktuelleAnzahl++;
            AnzahlSpaces--; 
        }

        Rückgabewert = false; 
    }
    else {

        cout << "Keine gültige Eingabe" << endl; 
        Rückgabewert = true;
        
    }
    

    return Rückgabewert; 
}


void printStars(int n)
{
    int i = 0;
    while (i < n)
    {

        std::cout << "*";
        i++;
    }

    cout << endl; 
}


void printSpaces(int AnzahlSpaces)
{
    int i = 0; 
    while (i < AnzahlSpaces){
        std::cout << " ";
        i++; 
    }
    
}

char nextChar()
{
    char nächsterBuchstabe;

    static #
    unsigned char = 'a';
    
    
    nächsterBuchstabe = 


    return nächsterBuchstabe; 
}