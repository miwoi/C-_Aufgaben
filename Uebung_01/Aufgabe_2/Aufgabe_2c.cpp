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
        
        Angabe = FigureZeichnen::stringZuOrientierung(eingabe);
        Wiederholung = FigureZeichnen::printFigure(Anzahl, Angabe); 

    }

    /*
    char tell; 

    for (int i = 0; i < 30; i++){
        tell = nextChar();  
        cout << tell;
    }
    cout << endl; 
    tell = nextChar(); 
    cout << tell;
    
    */ 

}

Orientierung FigureZeichnen::stringZuOrientierung(std::string EingegebeneOrientierung){

    Orientierung Ausgabe; 

    if(EingegebeneOrientierung == "Links"){

        Ausgabe = Orientierung::Links; 
    }  
    else if(EingegebeneOrientierung == "Rechts"){

        Ausgabe = Orientierung::Rechts; 
    }

    return Ausgabe; 
}



bool FigureZeichnen::printFigure(int MusterGroesse, Orientierung Angabe)
{

    bool Rückgabewert = false; 
    int AktuelleAnzahl = MusterGroesse;
    int MinimaleAnzahl = 1;
    int MaximaleAnzahl = MusterGroesse;


    if(Angabe == Links){

        while (AktuelleAnzahl >= MinimaleAnzahl)
        {
            FigureZeichnen::printStars(AktuelleAnzahl);
            AktuelleAnzahl--;
        }

        AktuelleAnzahl = AktuelleAnzahl + 2;

        while (AktuelleAnzahl <= MaximaleAnzahl)
        {
            FigureZeichnen::printStars(AktuelleAnzahl);
            AktuelleAnzahl++;
        }

        Rückgabewert = false; 

    }
    else if (Angabe == Rechts){

        int AnzahlSpaces = MinimaleAnzahl; 

        while (AktuelleAnzahl >= MinimaleAnzahl)
        {
            FigureZeichnen::printSpaces(AnzahlSpaces); 
            printStars(AktuelleAnzahl);

            AktuelleAnzahl--;
            AnzahlSpaces++; 
        }

        AktuelleAnzahl = AktuelleAnzahl + 2;
        AnzahlSpaces = AnzahlSpaces - 2; 

        while (AktuelleAnzahl <= MaximaleAnzahl)
        {
            FigureZeichnen::printSpaces(AnzahlSpaces); 
            FigureZeichnen::printStars(AktuelleAnzahl);

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


void FigureZeichnen::printStars(int n)
{
    int i = 0;
    while (i < n)
    {

        cout << FigureZeichnen::nextChar(); 

        i++;
    }

    cout << endl; 
}


void FigureZeichnen::printSpaces(int AnzahlSpaces)
{
    int i = 0; 
    while (i < AnzahlSpaces){
        std::cout << " ";
        i++; 
    }
    
}

char FigureZeichnen::nextChar()
{
    static unsigned char auszugebenderBuchstabe = 'a'; 
    static unsigned int i = 0; 
    
    if(i == 0){

        auszugebenderBuchstabe = 'a'; 
        i = 1;

    }
    else if (i == 26){

        
        auszugebenderBuchstabe = 'a'; 
        i = 1; 
    }
    else{
        
        auszugebenderBuchstabe = 'a'; 
        auszugebenderBuchstabe = auszugebenderBuchstabe + i;
        i++;

    }


    return auszugebenderBuchstabe; 
}

