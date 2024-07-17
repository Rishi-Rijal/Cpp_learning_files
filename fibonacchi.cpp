#include <iostream>
using namespace std;

int fibonacchi(int a){
    int firstNum = 0;
    int secondNum = 1;
    int fibSum;
    if (a==0 or a== 1){
        return a;
    }
    for (int i=2; i<=a; i++){
        fibSum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = fibSum;
    }
    return fibSum;
}

// using recursion;
int fibonacch(int n){
    if (n==0 or n== 1){
        return n;
    }
    return fibonacch(n-1) + fibonacch(n-2);
}


int main(){

    int r = fibonacchi(6);
    cout << r << endl;

    int recu = fibonacch(6);
    cout << recu << endl << "end 1 test " << endl;


    return 0;
}