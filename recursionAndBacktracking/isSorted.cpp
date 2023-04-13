#include <iostream>
#include <vector>
using namespace std;
bool isSorted( vector <int> arr , int n , int i)
{
   if( i == n-1)
    return true;
   if(arr[i+1] < arr[i])
   return false;
  return isSorted( arr , n , i+1);
}
int main(int argc, char const *argv[])
{
vector <int> arr { 1 , 3, 4, 5 , 1};
int n = arr.size();
    int i = 0;
    bool ans = isSorted( arr , n , i);
    if(ans)
    {
        cout <<"Array is sorted" <<endl;
    }
    else
    {
        cout <<"Array is not sorted" <<endl;
    }
    return 0;
}
