#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
void maxSum(vector <int> &arr , int i , int sum , int &maxi)
{
    //Base case--
    if(i >= arr.size())
    {
        maxi = max( sum , maxi);
        return;
    }
   // Include --
     return maxSum( arr , i+2 , sum +arr[i] , maxi);
    // exclude --
     return maxSum(arr , i+1 , sum , maxi);
}
int main(int argc, char const *argv[])
{
    vector <int> arr{1 , 3  , 5 , 7, 9};
    int i = 0;
    int maxi = INT_MIN;
    int sum = 0;
     maxSum(arr , i , sum , maxi);
    cout <<"Answer : " <<maxi;
    return 0;
}
