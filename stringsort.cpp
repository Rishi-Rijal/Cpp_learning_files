#include <iostream>
#include <cstring>
using namespace std;

string sortstring(string &mystr){
    int size = mystr.size();
    for (int i=0; i<size; i++){
        for (int j=i+1; j<(size); j++){
            if (mystr[i]>mystr[j]){
                char temp = mystr[i];
                mystr[i] = mystr[j];
                mystr[j] = temp;
            }
        }
    }
    return mystr;
}

int main(){
    string mystr = "star";
    sortstring(mystr);
    cout << mystr << endl;

    return 0;
}