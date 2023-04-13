#include <iostream>
#include <string>
using namespace std;
bool isPalindrome( string str , int i , int j)
{
    while(i<=j)
    {
      if(str[i] != str[j])
      {
        return false;
      }
       i++;
       j--;
    }
    return true;
}
bool validPalindrome(string str)
{
    int i = 0;
     int  j = str.length() - 1;
     while(i <= j)
     {
        if(str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        {
            return isPalindrome( str , i , j-1) || isPalindrome(str , i+1 , j);
        }
     }
     return true;
}
int main(int argc, char const *argv[])
{
    string str;
    cout <<"Enter the string : ";
    getline(cin , str);
    if(validPalindrome(str))
    {
        cout <<"valid palindrome " <<endl;
    }
        else
        {
            cout <<"Not valid palindrome " <<endl;
        }
    return 0;
}