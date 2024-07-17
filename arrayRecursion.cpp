#include <iostream>
using namespace std;

void PrintArr(int arr[], int idx){

    cout << arr[idx] << " ";
    idx++;
    if (idx<4){
    PrintArr(arr,idx) ;
    }
    
}

int main(){

    int arr[]{1,2,3,4};
    PrintArr(arr,0);



    return 0;
}