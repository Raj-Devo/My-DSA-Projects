#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string str;
    cout <<"Enter the string : ";
    getline(cin , str);
    string target;
    cout <<"Enter the subpart to be removed : ";
    cin >> target;
     while(str.find(target) != string::npos)
     {
         str.erase(str.find(target) , target.length());
     }
     cout <<str <<endl;
    return 0;
}
