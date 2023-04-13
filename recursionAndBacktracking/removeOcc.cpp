#include <iostream>
#include <string>
using namespace std;
void solvestr(string &str , string part)
{
    //Base Case--
   if( str.find(part) == string::npos)
   {
    return;
   }
   //
   if(str.find(part))
   {
    str = str.erase(str.find(part) , part.length() );
   solvestr(str , part);
   }
}
int main(int argc, char const *argv[])
{
    string str = "daabcbaabcbc";
    string part = "abc";
    solvestr(str , part);
    cout <<str <<endl;
    return 0;
}
