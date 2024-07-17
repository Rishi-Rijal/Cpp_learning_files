#include <iostream>
using namespace std;

// Basic concept of factorial
void factorial(int a){
    int factori = 1;
    for (int i=1; i<=a; i++){
        factori *= i;
    }
    cout << factori << endl;
}

// factorial using recursion;
int factor(int a){
    int facto;
    if (a==1){
        return 1;
    }
    facto = a*factor(a-1);
    return facto;
}


int main(){

    factorial(5);
    int f = factor(4);
    cout << f << endl;
}