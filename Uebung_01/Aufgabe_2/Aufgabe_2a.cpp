#include "Aufgabe_2a.h"

using namespace::std;

int main(){

    Primitive_Datentypen(); 


}


void Primitive_Datentypen()
{

    // Array?

    int D_PN_int;
    int D_P_int;
    int D_PN_double;
    int D_P_short;
    int D_bool;

    D_PN_int = sizeof(int);
    D_P_int = sizeof(unsigned int);
    D_PN_double = sizeof(double);
    D_P_short = sizeof(unsigned short);
    D_bool = sizeof(bool);

    cout << "Eigenschaften von Int:" << endl;
    cout << "Anzahl Bits: " << D_PN_int << endl;
    cout << "Minimaler Wert: " << INT_MIN << endl;
    cout << "Maximaler Wert: " << INT_MAX << endl;
    cout << endl;

    cout << "Eigenschaften von Unsigned Int:" << endl;
    cout << "Anzahl Bits: " << D_P_int << endl;
    cout << "Minimaler Wert: " << std::numeric_limits<unsigned int>::min() << endl;
    cout << "Maximaler Wert: " << std::numeric_limits<unsigned int>::max() << endl;
    cout << endl;

    cout << "Eigenschaften von Double:" << endl;
    cout << "Anzahl Bits: " << D_PN_double << endl;
    cout << "Minimaler Wert: " << std::numeric_limits<double>::min() << endl;
    cout << "Maximaler Wert: " << std::numeric_limits<double>::max() << endl;
    cout << endl;

    cout << "Eigenschaften von Unsigned Short:" << endl;
    cout << "Anzahl Bits: " << D_P_short << endl;
    cout << "Minimaler Wert: " << std::numeric_limits<unsigned short>::min() << endl;
    cout << "Maximaler Wert: " << std::numeric_limits<unsigned short>::max() << endl;
    cout << endl;

    cout << "Eigenschaften von Bool:" << endl;
    cout << "Anzahl Bits: " << D_bool << endl;
    cout << "Minimaler Wert: " << std::numeric_limits<bool>::min() << endl;
    cout << "Maximaler Wert: " << std::numeric_limits<bool>::max() << endl;
    cout << endl;
}
