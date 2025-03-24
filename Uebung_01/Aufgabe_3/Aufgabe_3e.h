#pragma once
#include <iostream> 

class CharGenerator{

    public:
        CharGenerator(char initalChar = 'a'); 
        char generateNextChar();
        

    private:  
        char nextChar; 

}; 



class PatternPrinter {

    public: 
        PatternPrinter(); 
        void PrintPattern(); 
    
    private: 
         
        void printNChars(int n); 
        int readWidth(); 

        CharGenerator charGen;
              
}; 


