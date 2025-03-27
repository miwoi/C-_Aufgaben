#include "main.h"

using namespace std; 


int main(){

    int Array[5] {1,3,5,7,9};
    
    size_t ArraySize = sizeof(Array) / sizeof(Array[0]);

    // const int *pArray = Array + ArraySize + 1;

    //ArrayBasics();
    //NeuesArray();
    //ArrayLogik();
    //printArray(pArray, ArraySize);
    //printArrayPoi(pArray, ArraySize);
    //printArrayIterator(pArray, ArraySize);
    //SubArrays(Array + 1, Array + 3);

    size_t size; 

    int *NeuerPointer = ArraysUndHeap( &size);

    SubArrays(NeuerPointer, NeuerPointer + size);

    delete[] NeuerPointer;
    NeuerPointer = nullptr; 

}
 
void ArrayBasics(){

    // Interger Array der Größe 10
    int array[10];

    // Zugriff auf das erste Element

    int i = 0;
    i = *array;
    i = array[0];
    cout << i << endl; 

    // Neuer Zeiger für Zugriff
    int *pArray = array;
    cout << *pArray << endl; 

    //Zugriff auf das nächste Element durch inkrementieren des Zeigers möglich
    //Pointerarithmetik 

    i = *pArray + 1;
    cout << i << endl; 

    //Größe des Arrays 
    cout << sizeof(array) << endl; 
    //Bestimmung der Anzahl an Elementen
    cout << sizeof(array) / sizeof(array[0]) << endl; 
    //Der Zeiger besitzt natürlich seine eigene Größe 
    cout << sizeof(pArray) << endl; 


}

void NeuesArray(){

    int ArrayNeu[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 

    for(int i = 0; i < (sizeof(ArrayNeu)/ sizeof(ArrayNeu[0])); i++){

        cout << ArrayNeu[i] << endl; 

        int *pArrayNeu = ArrayNeu;

        cout << *pArrayNeu + i << endl; 
    }



}

void ArrayLogik()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; 
    int *pArr = arr;
    
    *pArr = *pArr + 1; //*pArr = 2
    *(pArr + 3) = arr[4] + *pArr;
    *(pArr + 1) = *pArr + 2; 
    arr[2] = *(pArr + 5); 
    *(pArr + 6) = *(pArr + 4) * *(pArr);
    *(pArr++) = *pArr + *pArr++;

    cout << "Werte des Arrays: (";

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        
        cout << arr[i] << ", ";
        
    }
    cout << ")" << endl;

}

void printArray(const int *array, size_t size)
{
    size = size - 1;  
    cout << "printArray" << endl;
    for (size_t i = 0; i < size; ++i)
    {
        cout << array[i] << endl;
    }
}

void printArrayPoi(const int *array, size_t size)
{
    cout << "printArrayPointer" << endl;
    const int *Pointer = array;
    for (Pointer; Pointer != array + size; ++Pointer){

        cout << *Pointer << endl; 
    }
}

void printArrayIterator(const int* ArrayEnd, size_t size)
{
    cout << "PrinatArrayIterator" << endl;
    const int *begin = ArrayEnd - size -1;
    const int *end = ArrayEnd; 

    for (const int *pArray = begin; pArray != end - 1; ++pArray)
    {
        cout << *pArray << endl; 

    }
     
}

void SubArrays(const int *begin, const int *end)

{
    cout << "Ausgabe von Subarrays" << endl;

    for (const int *p = begin; p != end; ++p){

        cout << *p << endl;
    }

}



int* ArraysUndHeap(size_t *size)
{

    size_t AnzahlElemenete = 0; 
    cout << "Aus wievielen Elementen soll das Array bestehen: "; 
    cin >> AnzahlElemenete;
    cout << "Geben Sie " << AnzahlElemenete << " Zahlen ein: " << endl; 

    int *pArray = new int [AnzahlElemenete];

    for (size_t i = 0; i < AnzahlElemenete; ++i){

        cin >> pArray[i]; 
    }

    *size = AnzahlElemenete; 
    return pArray; 
}
