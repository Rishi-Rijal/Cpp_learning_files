#include<iostream>

 using namespace std;

int main(){
    int x;
    cout << &x << endl;  //& gives the address of a data stored;


    // We can also store the address of the data in a variable of datatype pointer

    int* poiX = &x;

    cout << "The address is " << poiX << endl;

    return 0;
}