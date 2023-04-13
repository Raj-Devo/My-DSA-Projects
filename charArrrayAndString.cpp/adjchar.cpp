#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
   string str;
   cout <<"Enter the string with adjacent characters : ";
   getline(cin , str);
   string ans;
   for(int i = 0 ; i<str.length() ; i++)
   {
    if(ans.length() >0)
    {
     if(ans[ans.length()-1] == str[i])
     {
        ans.pop_back();
     }
     else
     {
        ans.push_back(str[i]);
     }
    }
    else
    {
        ans.push_back(str[i]);
    }
   }
   cout <<ans <<endl;
    return 0;
}
