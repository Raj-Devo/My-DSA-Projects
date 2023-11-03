#include <iostream>
using namespace std;
int* solve()
{
    int a = 5;
    int* p = &a;
    cout <<p <<endl;
    return p ;
}
int main(int argc, char const *argv[])
{
   int* ans = solve();
   cout <<ans <<endl;
    return 0;
}
