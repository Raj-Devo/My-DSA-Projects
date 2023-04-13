#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void permutationPrint(string &str , int i)
{
    //Base case--
    if( i >= str.length())
    {
      cout <<str <<" ";
    return;

    }
    //swapping --
    for(int j = i; j<str.length() ; j++)
    {
        //swapping values--
        swap( str[i] , str[j]);

        //recursive call--
        permutationPrint(str , i+1);

        //Backtracking--
        swap(str[i] , str[j]);
    }
}
int main(int argc, char const *argv[])
{
    string str = "abc";
    int i = 0;
    permutationPrint(str , i);
    return 0;
}