#include <iostream>
using namespace std;

int PrintArr(int arr[], int idx,int maxNum){
    if (arr[(idx)] >= maxNum){
        maxNum = arr[idx];
    }
    idx++;
    if (idx==4) return maxNum;

    cout << "idx is " << idx << " and maxnum is " << maxNum << endl;
    PrintArr(arr,idx,maxNum) ;
    
    
}

int main(){

    int arr[]{42,55,66,45};
    int na = PrintArr(arr,0,arr[0]);
    cout << na<< endl;



    return 0;
}