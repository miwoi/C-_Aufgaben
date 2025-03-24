#include "Aufgabe_3e.h"

int main (){

    CharGenerator charGen('x'); 
    char next = charGen.generateNextChar();  
    std::cout << next << std::endl; 

}

CharGenerator::CharGenerator(char initialChar) 
{
    nextChar = initialChar; 

}

char CharGenerator::generateNextChar()
    CharGenerator::CharGenerator()
{
}
char CharGenerator::generateNextChar()
{
    return 0;
}
{

    static unsigned char auszugebenderBuchstabe = 'a'; 
    static unsigned int i = 0; 
    
    if(i == 0){

        auszugebenderBuchstabe = nextChar; 
        i = 1;

    }
    else if (i == 26){

        
        auszugebenderBuchstabe = nextChar; 
        i = 1; 
    }
    else{
        
        auszugebenderBuchstabe = nextChar;  
        auszugebenderBuchstabe = auszugebenderBuchstabe + i;
        i++;

    }

    nextChar = auszugebenderBuchstabe; 

    return nextChar;
}
