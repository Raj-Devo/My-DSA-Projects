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
    return INT_MIN;
  }
  //recursive call --
  int maxi = INT_MIN ;
  for( int i = 0 ; i<n ; i++)
  {
  int ans =  minSize(arr , n , target , output + arr[i]);
  if( ans != INT_MAX)
     maxi = max( ans + 1 , maxi);
  }
  return maxi;
}
int main(int argc, char const *argv[])
{
    vector <int> arr { 1 , 2, 2};
    int target = 5;
    int n = arr.size();
    int output = 0;
    // minSize is function to get maximum value of segments --
    int ans = minSize( arr , n , target , output );
    cout <<ans <<endl;
    return 0;
}