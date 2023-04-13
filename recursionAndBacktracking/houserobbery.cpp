#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
void maxMoney(vector <int> &arr , int sum , int i , int &maxi)
{
   //Base Case--
   if(i >= arr.size())
   {
    maxi = max(sum , maxi);
    return;
   }
   //include
  maxMoney(arr , sum + arr[i]  , i+2 , maxi);
  //exclude
  maxMoney(arr , sum , i+1 , maxi);
}
int main(int argc, char const *argv[])
{
    vector <int> arr{2 , 1 , 1 , 2};
    int sum = 0;
    int index = 0;
    int maxi = INT_MIN;
    maxMoney(arr ,sum , index , maxi);
    cout <<maxi <<endl;
    return 0;
}
