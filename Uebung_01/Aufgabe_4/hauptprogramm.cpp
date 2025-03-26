#include "Vector.h"
#include "Vector.cpp"
#include <iostream>
#include "main.h"


void foo(Vector3 v) {
    std::cout << "foo begin" << std::endl;
    std::cout << v << std::endl;
    std::cout << "foo end" << std::endl;
}

int main() {    

    Vector3 NeuerVektor = Vector3(1,2,3) + Vector3(4,5,6) - Vector3(7,8,9);

    std::cout << "Test" << std::endl;  
    std::cout << NeuerVektor << std::endl; 

    foo(NeuerVektor);
    std::cout << (Vector3() + Vector3(4, 3, 1)) * Vector3(5, 7, 1) << std::endl; // should be 42
}
