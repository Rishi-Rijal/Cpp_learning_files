#include<iostream>

 using namespace std;

int main(){
    int x = 45;
    cout << &x << endl;  //& gives the address of a data stored;
    // We can also store the address of the data in a variable of datatype pointer
    int* ptrX = &x; // gives hexadecimal address it can be different every other time
    cout << "The address of x is " << ptrX << endl;

    //another example;
    float y=56.43;
    cout << &y << endl;   
    float* ptrY = &y; // it will store the address of float datatype
    cout << "The address of y is " << ptrY << endl;


    //Defrencing of a pointer variable;
    // With the use of dereferencing we can access the data stored in a particular address

    cout << "the value at address prtX is " << *ptrX << endl; //45
    cout << "the value at address prtY is " << *ptrY << endl; // 56.43


    // updating the data using pointer;
    *ptrX = 66;
    cout << "After changing the value, value at address prtX is " << *ptrX << endl; //66

    int *ptrZ;
    *ptrZ = 63;

    int value = *ptrZ;
    cout << "the value is " << value << endl;


    return 0;
}