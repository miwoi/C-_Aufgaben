#include "Vector.h"

using namespace std;


Vector3::Vector3() 
{
    x = 0; 
    y = 0; 
    z = 0; 

    cout << "Einheitsvektor erstellt" << endl; 
}

Vector3::Vector3(int a, int b, int c)
{
    a = x; 
    b = y; 
    c = z; 

    cout << "Vektor mit den Werten (" << a << "," << b << "," << c << ") erstellt!" << endl; 
}





Vector3::Vector3(const Vector3 &other) : x(other.x), y(other.y), z(other.z)
{
    cout << "Vektor mit den Werten (" << x << "," << y << "," << z << ") wurde korpiert!" << endl; 

}
Vector3::~Vector3()
{
    cout << "Vektor wurde gelöscht" << endl; 
}






Vector3 Vector3::operator+(Vector3 rhs)
{
    return Vector3(x + rhs.x , y + rhs.y, z + rhs.z);
}

Vector3 Vector3::operator-(Vector3 rhs)
{
    return Vector3(x - rhs.x, y - rhs.y, z - rhs.z);
}

int Vector3::operator*(Vector3 rhs)
{
    return x * rhs.x + y * rhs.y + z * rhs.z; 
}

int Vector3::getX()
{
    return x;
}
int Vector3::getY()
{
    return y;
}

int Vector3::getZ()
{
    return z;
}



std::ostream &operator<<(std::ostream& out, Vector3 rhs)
{
    out << "(" << rhs.getX() << "," << rhs.getY() << "," << rhs.getZ() << ")"; 
    return out; 
}

