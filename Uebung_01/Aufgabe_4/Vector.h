#pragma once
#include <iostream> 

class Vector3  {

    public:     
        Vector3(); 
        Vector3(double a, double b, double c); 
        Vector3(const Vector3& other); 
        ~Vector3(); 

    private: 
        double x, y, z; 

}; 



