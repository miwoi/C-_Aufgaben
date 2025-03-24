#include "Klassen.h" 

using namespace::std;

int main(){


    Variante1 var1; 
    var1.aendern(7000, 8000); 

    cout << "Punkt P1_X:" << var1.getX() << endl; 
    
    
    Variante4 var4(2000, 8000);
    cout <<  "Punkt P4_Y:" << var4.getY() << endl;  


    Variante5 var5(200); 
    cout << "Punkt P5_X:" << var5.getX() << endl; 
    cout << "Punkt P5_Y:" << var5.getY() << endl; 


    Variante5 var5_1(200, 700); 
    cout << "Punkt P5_1_X:" << var5_1.getX() << endl; 
    cout << "Punkt P5_1_Y:" << var5_1.getY() << endl;


    Variante6 var6(2500, 7800); 
    cout << "Punkt P6_X:" << var6.getX() << endl; 
    cout << "Punkt P6_Y:" << var6.getY() << endl;







}

//Variante 1
int Variante1::getX()
{
    return xKood;
}

int Variante1::getY()
{
    return yKood;
}

void Variante1::aendern(int x, int y)
{

    xKood = x; 
    yKood = y;  

}

//Variante 2
Variante2::Variante2()
{
    xKoordinate = 200; 
    yKoordinate = 400; 
}

// ...

//Variante 3
//... 


//Variante 4
Variante4::Variante4(int x, int y){

    xKood = x; 
    yKood = y; 

}
int Variante4::getX(){

    return xKood; 
}
int Variante4::getY(){

    return yKood; 
}

void Variante4::aendern(int x, int y)
{

    xKood = x; 
    yKood = y; 
}

//Variante 5
Variante5::Variante5(int x, int y){

    xKood = x; 
    yKood = y; 

}
int Variante5::getX(){

    return xKood; 
}
int Variante5::getY(){

    return yKood; 
}

void Variante5::aendern(int x, int y)
{
    xKood = x; 
    yKood = y; 
}


//Variante 6 
int Variante6::getX()
{
    return xKoord;
}

int Variante6::getY()
{
    return yKoord;
}

void Variante6::aendern(int x, int y)
{
    xKoord = x; 
    yKoord = y; 

}
