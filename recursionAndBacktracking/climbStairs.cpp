#include <iostream>
using namespace std;
int climbStair(int n)
{
    if( n == 0 || n == 1)
    return 1;
    int ways = climbStair(n-1) + climbStair(n-2);
    return ways;
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the number of stairs : ";
    cin >>n;
    int ans = climbStair(n);
    cout <<ans <<endl;
    return 0;
}
