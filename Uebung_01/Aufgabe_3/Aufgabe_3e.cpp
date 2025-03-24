#include "Aufgabe_3e.h"

using namespace::std; 

int main() {


    PatternPrinter Pattern1; 
    Pattern1.PrintPattern(); 


}
PatternPrinter::PatternPrinter(){

    //Impliziter Standardkonstruktor 
}


void PatternPrinter::PrintPattern()
{

    int n = readWidth(); 
    printNChars(n); 

}
void PatternPrinter::printNChars(int n)
{
    int i = 0;
    char print;  
    
    while (i < n){

        print = charGen.generateNextChar(); 
        cout << print; 
        i++; 

    }

}
int PatternPrinter::readWidth()
{
    int AnzahlBuchstaben = 0; 

    cout << "Wie groß soll das Pattern sein: "; 
    cin >> AnzahlBuchstaben; 

    return AnzahlBuchstaben;
}


CharGenerator::CharGenerator(char initalChar) : nextChar(initalChar){}


char CharGenerator::generateNextChar(){

    char c = nextChar; 

    if (nextChar >= 'z') {

        nextChar = 'a'; 
    }
    else{
        nextChar++; 
    } 


    return c;
}