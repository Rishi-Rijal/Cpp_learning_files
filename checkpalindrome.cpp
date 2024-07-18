#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Basic way using reverse function
void checkPalindrome(int num){
    string mystr = to_string(num);
    string oldstr = mystr;
    reverse(mystr.begin(),mystr.end());

    if (mystr == oldstr){
        cout << "The number is a palindrome" << endl;
    }
    else{
        cout << "The number is not a plaindorme" << endl;
    }
}

// basic way without using reverse
void PalindromeOrNot(int num){
    string mystr = to_string(num);
    int size = mystr.size();

    for(int i=0; i<(size/2); i++){
        if(mystr[i]!=mystr[size-i-1]){
            cout << "The number is not a palindrome" << endl;
            return;
        }
    }
    cout << "The number is a palindorme" << endl;
    return;
}
// using Recursion;

string Palindrome(int num, int idx){
    string mystr = to_string(num);
    int len = mystr.size();
    if (idx>(len/2)) return "number is a palindrome";
    if (mystr[idx] != mystr[len-idx-1]) return "number is not a palindrome";
    return Palindrome(num,idx+1); 

    
    

}

int main(){
    int mynum = 12214;
    checkPalindrome(mynum);
    PalindromeOrNot(mynum);
    string flag = Palindrome(mynum,0);
    cout << flag << endl;
}
