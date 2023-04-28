#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string str;
    cout <<"Enter the string : ";
   getline(cin , str);
     //Putting the characters in stack
     stack <char> st;
     int i = 0;
     while(i < str.length())
     {
        st.push(str[i]);
        i++;
     }
     //Printing the reverse string :
     while(!st.empty())
     {
        cout <<st.top() <<" ";
        st.pop();
     }
    return 0;
}
