#include "main.h"


using namespace std; 


int main(){

    //ReferenzenUndPointer(); 
    //SpeicherplatzReferenzenUndPointer(); 
    //AusgabeVonSpeicheradressen(); 

    /*
    int pk3 = 12; 
    int pk4 = 14;

    int *p3 = &pk3; 
    int *p4 = &pk4; 

    int **pp3 = &p3; 
    int **pp4 = &p4; 
    SwapPointer(pp3, pp4); 
    */ 
    
    /*
    int IntVal = 5; 
    int *pIntVal = &IntVal;
    
    
    squareValue(IntVal); 
    IntVal = 5; 
    squarePointer(pIntVal); 
    IntVal = 5; 
    squareReference(IntVal); 
    */ 

    /*
    int a = 12; 
    int b = 14; 
    int *pa = &a; 
    int *pb = &b; 
    SwapUerbergabeValue(a, b); 

    a = 24; 
    b = 27; 
    SwapUerbergabeReferenz(a, b);
    
    a = 30; 
    b = 32; 
    SwapUerbegabePointer(pa, pb); 
    */

    /*
    int var = 42; 
    cout << "var = " << var << endl; 
    Programmanalyse(var); 
    */ 

    //constCorrectness(); 
    NeueZuweisungen(); 

}


void ReferenzenUndPointer()
{

    int IntVal = 42; 
    int* pIntVal = &IntVal;
    
    cout << "Wert von IntVal: " << IntVal << endl; 
    cout << "Wert von &IntVal: " << &IntVal << endl; 
    cout << "Wert von pIntVal: " << pIntVal << endl; 
    cout << "Wert von *pIntVal: " << *pIntVal << endl; 
    cout << "Wert von &pIntVal: " << &pIntVal << endl; 
}


void SpeicherplatzReferenzenUndPointer() {
 
    int IntVal = 0; 
    int* pIntVal = &IntVal;
    //int** pIntVal = &pIntVal;
    
    char CharVarl = 'C'; 
    char* pCharVal = &CharVarl; 
    //char** pCharVal = &pCharVal; 

    // Alle Pointer/ Variablen benötigen vier Bytes zum Speichern 



}

void AusgabeVonSpeicheradressen()
{

    char c = 'T'; 
    char d = 'S'; 

    char *p1 = &c;
    char *p2 = &d; 
    char *p3; 

    p3 = &d; 
    cout << *p3 << endl; 

    p3 = p1; 
    cout << *p3 << endl; 
    cout << (void*)p3 << endl; 

    *p1 = *p2; 
    cout << *p1 << endl; 
    cout << (void*)p1 << endl; 

}

void SwapPointer(int **p1, int **p2)
{

    cout << *p1 << endl; 
    cout << *p2 << endl; 

    int *temp = *p1; 
    *p1 = *p2; 
    *p2 = temp; 

    cout << *p1 << endl; 
    cout << *p2 << endl;

}
void squareValue(int a){

    a = a * a; 
    cout << a << endl;

}
void squarePointer(int *a){

    *a = *a * *a; 
    cout << *a << endl; 

}
void squareReference(int &a){

    a = a * a; 
    cout << a << endl; 

}

void Initialisierung()
{

    int IntVal = 5; 
    int *pIntVal = &IntVal;


    cout << endl; 
    
    
    cout << IntVal << endl; //Wert  
    cout << &IntVal << endl; //Adresse des Wertes
    //cout << *IntVal << endl; //Nicht definiert 
    
    cout << pIntVal << endl; //Adresse des Wertes 
    cout << &pIntVal << endl; //Adresse des Pointers 
    cout << *pIntVal << endl; //Wert 
    


    cout << endl; 

    cout << *&IntVal << endl; //Wert 
    cout << *&*&IntVal << endl; //Wert

    cout << endl; 

    cout << *&pIntVal << endl; //Adresse des Wertes
    cout << &*pIntVal << endl; //Adresse des Wertes 
    cout << **&pIntVal << endl; //Wert

    cout << endl; 

    cout << &*&pIntVal << endl; //Adresse des Pointers
    cout << *&*pIntVal << endl; //Wert 

    cout << endl; 


}

void SwapUerbergabeValue(int a, int b)
{
    cout << a << ',' <<  b << endl;
    int temp = 0; 

    temp = a; 
    a = b; 
    b = temp; 

    cout << a << ',' <<  b << endl;
}

void SwapUerbergabeReferenz(int &a, int &b)
{

    cout << a << ',' <<  b << endl;
    int temp = 0; 

    temp = a; 
    a = b; 
    b = temp; 

    cout << a << ',' <<  b << endl;

}

void SwapUerbegabePointer(int *a, int *b)
{
    cout << *a << ',' <<  *b << endl;
    int temp = 0; 

    temp = *a; 
    a = b; 
    *b = temp; 

    cout << *a << ',' <<  *b << endl;
}

void Programmanalyse(int& i)
{

    int i2 = i; 
    int &i3 = i; 

    cout << "i = " << i << endl; 
    cout << "i2 = " << i2 << endl; 
    cout << "i3 = " << i3 << endl; 

    cout << "&i = " << &i << endl; 
    cout << "&i2 = " << &i2 << endl;
    cout << "&i3 = " << &i3 << endl;

}

void constCorrectness()
{
    int i = 1; //integer
    int j = 2; //integer  
    float f = 3.1; 
    int *iP = &i; //Pointer 

    const int *ciP = &i; //konstanter Pointer
        ciP = &j; //Neuzuweisung zu anderem integer 
        //ciP = j; //Falscher Entitätstpy
        //ciP = *i; //Falscher Typ -> int 
        //ciP = &f; //Falscher Entitätstyp 

        

    int const *ciP2 = &i; 
    
    int* const icP = &i; 
    const int* const cicP = &i; 

    int** iPP = &iP; 
    const int* const* cicPP = &iP; 
    int** const iPcP = &iP; 


 
}

void NeueZuweisungen()
{
    int a = 4; //Integer
    int b = 36; 
    int d = 48; 
    int e1 = 24; 
    int e2 = 0; 
    int e3 = 0; 
    int f = 60;
        int *pf1 = &f;
        int *pf2 = &d;    

    int g = 12; 
        int *pg1 = &g; 
        int *pg2 = &f; 


    int* const pa = &a; // Konstanter Zeiger auf nicht konstanten Integer 
        *pa = 12; 
        //pa = &b; 
        

    const int* pb = &b; //Zeiger auf konstanten Integer 
        //*pb = 48; 
        pb = &a; 

    int const c = 72; //konstanter Integer 
        //c = 4; //Neuzuweisung funktioniert nicht 
        //int *pc = &c;  //Zuweisung eines nicht konstanten Pointers erster Ordnung funktioniert nicht 
        const int *pc = &c; //Zuweisung eines konstanten Pointers funktioniert 
        const int* const pc2 = &c; // Zuweisung eines konstanten Pointers auf einen konstanten Integer funktioniert
            //pc2 = &a; //Neue Zuweisung von pc2 funktioniert dementsprechend nicht 
            
            
    int const *pd = &d; //Nicht konstanter Pointer auf nicht konstanten Integer
        pd = &c; 
        //*pd = a; //Wert an der Adresse nicht veränderbar 
        
        
    int const* const pe1 = &e1; //Konstanter Pointer auf Konstanten Integer 
        //pe1 = pd; //Pointer ist konstant 
        //*pe1 = 72;  //Integer ist konstant 


    //int* const const pe2 = &e2; //Konstanter Pointer auf nicht konstanten Integer 
        //pe2 = pd; 
        //*pe2 = 72; 

    //int const const* pe3 = &e3; //Nicht konstanter Pointer auf nicht konsttanten Integer 
        //pe3 = pd; 
        //*pe3 = 12; 

    int const* const* ppf = &pf1; //Zeiger zweiter Ordnung - Nicht konstanter Pointer auf konstanten Pointer auf konstanten Integer 
        ppf = &pf2; 
        //*ppf = &e3; 
        //**ppf = 84;    

    int const** const ppg = &pg1; //Zeiger zweiter Ordnung - Konstanter Pointer auf nicht konstanten Pointer auf konstanten Integer 
        //ppg = &pg2; 
        *ppg = &e3; 
        //**ppg = 24; 

    
    //int const const a = 0; 
    const int const b = 0;
    //const const int c = 0; 
    
    int* const const a1 = &a;  
    int const* const a2 = &a; 
    int const const* a3 = &a; 

    const int* const b1 = &b;
    const int const* b2 = &b; 




}
