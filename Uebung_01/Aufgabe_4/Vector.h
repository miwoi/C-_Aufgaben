#pragma once
#include <iostream> 

class Vector3  {


    friend std::ostream& operator<<(std::ostream&, Vector3); 

    public:     
        Vector3(); 
        Vector3(int a, int b, int c); 

        Vector3(const Vector3& other); 
        ~Vector3(); 

        Vector3 operator+(Vector3 rhs); 
        Vector3 operator-(Vector3 rhs); 
        int operator*(Vector3 rhs); 

        int getX(); 
        int getY(); 
        int getZ(); 

    private: 
        int x, y, z; 
}; 



