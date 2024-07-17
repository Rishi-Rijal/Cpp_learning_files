#include <iostream>
using namespace std;

// Simiple Way
int sumOfDigits(int num){
    int sum = 0;
    while (num!=0){
        int digit = num%10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

// Using Recursion
int SumDigits(int num){
    if (num/10 == 0) return num;

    return num%10 + SumDigits(num/10);
}

int main(){
    int number = sumOfDigits(55673);
    cout << "sum of digits using loop method " << number << endl;
    int seN = SumDigits(55673);
    cout << "sum of digits using recursion method " << seN << endl;

    return 0;
}