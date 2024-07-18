#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){

    /*{   
        char name = 'rishi';
        int names = int (name);
        cout << name << endl;
        cout << names << endl;
    }


    {   
        string mystr = "Rishi Ram Rijal";
        cout << mystr << endl;

        // Taking string as a input form a user;

        string str;
        cout << "Type the string: " << endl;
        // cin >> str;  can only get the input till a space or tab or new line
        // To resolve this issue we can use getline() function;

        // getline(cin,str);
        // cout << str << endl; 
    } 

    {
        // Indexing of string;(same as array indexing )
        string mystr = "I am currently studying strings";
        int mystr_size = mystr.size();
        cout << mystr_size << endl;

        cout << mystr[mystr_size-1] << endl;


    }

    // Some inbuilt function in string
    {
        //Reverse
        string str = "chars and strings";
        reverse(str.begin(),str.end());
        cout << str << endl;
    }
    
   {
        //substr;
        string str = "this is a string";
        string newstr = str.substr(0,1); // starting position, length of the substring
        cout << str << endl;
        cout << newstr << endl;
   }
   
  {
        // + operator
        string firststr = "Rishi ";
        string secondstr = "Ram";
        cout << firststr + secondstr  << endl; // concinate the string
  }
    
   {
        // strcat(); used to concinate the character array;

        char c1[6] = "rishi";
        char c2[6] = "rijal";

        strcat(c1,c2);
        cout << c1 << endl;
   }
   */

  {
        // push_back() 
        string s1 = "rishi";
        string s2 = "ram";
        s1.push_back('6');
        cout << s1 << endl;
  }

    return 0;
}