#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int minSize( vector <int> &arr , int &n , int &target , int output )
{
    //Base case --
  if( target == output)
  {
    return 0;
  }
  if(output > target)
  {
    return INT_MAX;
  }
  //recursive call --
  int mini = INT_MAX ;
  for( int i = 0 ; i<n ; i++)
  {
  int ans =  minSize(arr , n , target , output + arr[i]);
  if( ans != INT_MAX)
     mini = min( ans + 1 , mini);
  }
  return mini;
}
int main(int argc, char const *argv[])
{
    vector <int> arr {1 , 2 ,3};
    int target = 5;
    int n = arr.size();
    int output = 0;
    int ans = minSize( arr , n , target , output );
    cout <<ans <<endl;
    return 0;
}
