#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    return;
}

void swaping(int *ptrx, int *ptry){
    int temp;
    temp = *ptrx;
    *ptrx = *ptry;
    *ptry = temp;

    return;
}


int main(){

    
    int a,b;
    a= 45, b=44;
    swap(a,b);
    cout << a << " " << b << endl;
    
    //call by refrence
    int x,y;
    x=4, y=7;
    swaping(&x, &y);
    cout << x << " " << y << endl;

    // operations in pointers
    // we can do addition and subtraction in pointers

    //Example code
    int e= 45;
    int* ptre = &e;
    cout << "The address of x is " << ptre << endl;
    // After incrimenting the pointer by one
    ptre++;
    cout << "After incriment the new address is " << ptre << endl;




    return 0;
}