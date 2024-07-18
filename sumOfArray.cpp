#include <iostream>
using namespace std;

int PrintArr(int arr[], int idx, int sum){
    
    sum+= arr[idx];
    idx++;
    if (idx==5) return sum;
    PrintArr(arr,idx,sum) ;
    cout << "idx is " << idx << " and sum is " << sum << endl;
    
    
}

int main(){

    int arr[]{1,2,3,4,5};
    int na = PrintArr(arr,0,0);
    cout << na<< endl;



    return 0;
}