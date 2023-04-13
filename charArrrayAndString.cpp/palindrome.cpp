#include <iostream>
#include <string.h>
using namespace std;
bool isPalindrome( char str[])
{
      int i = strlen(str) - 1;
    int j = 0;
    while(i>j)
    {
      if(str[i] != str[j])
      {
        return false;
      }
       i--;
       j++;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    char str[100];
    cout <<"Enter a string : ";
    cin.getline(str , 50);
    if(isPalindrome(str))
    {
        cout <<"Palindrome" <<endl;
    }
    else
    {
          cout <<"Not palindrome" <<endl;
    }
    return 0;
}
