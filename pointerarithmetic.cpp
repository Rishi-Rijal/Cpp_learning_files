
#include <iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int *ptrarr = &arr[0];
    cout << "The address of the array is " << ptrarr << endl;
    /*
    Lets print the array using derefrencing;
    */
   cout << *ptrarr << endl; // only print the first element;

   for (int i=0; i<sizeof(arr[0]); i++){
    cout << "Value " << *(ptrarr+i) << " and its address " << (ptrarr+i) << endl ;
    }


    return 0;
}