#include <iostream>
using namespace std;
void countDig( int n , int& count)
{
    if( n == 0)
    return;
    if(n)
    count++;
    int val = n/10;
    countDig(val , count);
}
int main(int argc, char const *argv[])
{
    int n , count = 0;
    cout <<"Enter the number : ";
    cin >> n;
     countDig(n , count);
    cout << count;
    return 0;
}
