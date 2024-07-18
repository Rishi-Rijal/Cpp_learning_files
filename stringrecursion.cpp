#include <iostream>
#include <cstring>
using namespace std;

// using loop
string RemoveOccurance(string &mystr,char gchr){
    int size = mystr.size();
    for (int i=0; i<size;){
        if (mystr[i]== gchr){
            mystr.erase(i,1);
            size--;
        }
        else{
            i++;
        }
    }
    return mystr;
}
// using Recursion
string RemoveTheOccurance(string &mystr, char gchr, int idx){
    int size = mystr.size();
    if (mystr[idx]==gchr){
        mystr.erase(idx,1);
        if (idx==size-1){
            return mystr ;
        }
        idx--;

    }
    else if (mystr[size-1]!=gchr and idx==size-1){
        return mystr ;
    }

    return RemoveTheOccurance(mystr,  gchr, idx+1);
}

int main(){

    string name = "aaaaaaariaaaa";
    RemoveTheOccurance(name,'a',0);
    cout << name<< endl;
    return 0;
}