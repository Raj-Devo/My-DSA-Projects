#include <iostream>
#include <string>
using namespace std;
void findTarget( string str , int len , char target , int i , int &index)
{
    if(i >= len)
    {
        return;
    }
   if( str[i] == target)
   index = i;
   findTarget( str , len , target , i+1 , index);
}
int main(int argc, char const *argv[])
{
    string str;
    cout <<"Enter the string : ";
    getline( cin , str);
    char target;
    cout <<"Enter the target : ";
    cin >> target;
   int index = 0;
   int foundIndex = -1;
   findTarget( str , str.length() , target , index , foundIndex);
   cout <<foundIndex <<endl;
    return 0;
}
