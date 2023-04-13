#include <iostream>
using namespace std;
void printDig( int n)
{
    if( n == 0)
    return;
      printDig( n/10 );
      cout <<n%10 <<"  ";
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the number : ";
    cin >> n;
     printDig(n);
    return 0;
}