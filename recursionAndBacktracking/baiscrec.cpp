#include <iostream>
using namespace std;
void printCount(int n)
{
  // Base case--
  if(n == 0)
  return;
  // Processing--
 cout <<n <<" ";
  // Recursive call--
  printCount(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the value of n : ";
    cin >> n;
    printCount(n);
    return 0;
}
