#include <iostream>
#include <string>
using namespace std;
void solve(string str , char key , int i , int &lastOcc)
{
  //Base Case
  if (i >= str.length())
  {
    return;
  }
  // processing
  if(str[i] == key)
  {
    lastOcc = i;
  }
  //Reursive Call
   solve(str , key , i+1 , lastOcc);
}
int main(int argc, char const *argv[])
{
    string str = "abdbddedbcfd";
    char key = 'd';
    int lastOcc = 0;
    int index = 0;
    solve(str , key , index , lastOcc);
    cout <<lastOcc <<endl;
    return 0;
}
