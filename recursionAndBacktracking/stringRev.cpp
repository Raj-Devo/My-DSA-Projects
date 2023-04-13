#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void solve(string &str , int i , int j)
{
    //Base
    if(i >= j)
    return;
    //process
    swap(str[i] , str[j]);
    //recursive call
    solve(str , i+1 , j-1 );
}
int main(int argc, char const *argv[])
{
    string str = "jadi das";
    int i = 0;
    int j = str.length() - 1;
    solve(str , i ,j);
    cout <<str <<endl;
    return 0;
}
