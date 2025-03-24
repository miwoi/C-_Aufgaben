#pragma once 
#include <iostream>


//Impliziter Standardkonstruktor 
class Variante1 {

    public: 
        int getX(); 
        int getY(); 
        void aendern(int x, int y); 

    private: 
        int xKood; 
        int yKood;


}; 

//Expliziter Standardkonstruktor
class Variante2 {

    public: 
        Variante2(); 
        int getX() const; 
        int getY() const; 
        void aendern(int x, int y); 

    private: 
        int xKoordinate; 
        int yKoordinate;

}; 


//Direkte Initialisierung der Attribute 
    //Angabe der Werte im Header 
class Variante3 {

    public: 
        int getX(); 
        int getY();
        void aendern(int, int); 

    private: 
        int xKoordinate = 200; 
        int yKoordinate = 400; 

}; 

//Allgemeine Konstruktoren 
 class Variante4 {

    public: 
        Variante4(int, int);
        int getX(); 
        int getY(); 
        void aendern(int, int); 

    private: 

        int xKood; 
        int yKood;

 }; 

//Allgemeine Konstruktoren mit Wertvorgaben 
class Variante5 {

    public: 
        Variante5(int x, int y = 400); 
        int getX(); 
        int getY(); 
        void aendern(int, int); 

    private: 

        int xKood; 
        int yKood;


}; 

//Konstruktorinterne Liste
class Variante6 {

    public: 
        Variante6(int x, int y) : xKoord {x}, yKoord {y} {}
        
        int getX();
        int getY();
        
        void aendern(int, int); 
        
    private: 
        int xKoord; 
        int yKoord; 


}; 



