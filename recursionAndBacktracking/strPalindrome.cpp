#include <iostream>
#include <string>
using namespace std;
bool solve( string &str , int i , int j)
{
    //BaseCase
    if(i >= j)
    return true;
    //process
    if(str[i] != str[j])
    return false;
    //recursive call
    solve(str , i + 1, j - 1);
}
int main(int argc, char const *argv[])
{
    string str = "racecab";
    int i = 0;
    int j = str.length() - 1;
    if(solve(str , i ,j))
    {
        cout <<"Palindrome";
    }
    else
    {
        cout <<"Not palindrome";
    }
    return 0;
}
