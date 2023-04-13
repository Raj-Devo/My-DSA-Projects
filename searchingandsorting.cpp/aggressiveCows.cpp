#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector <int> arr , int  m , int n , int mid)
{
   int cowCount = 1;
   int lastpos = arr[0];
   for(int i = 0 ; i< n ; i++)
   {
    if(arr[i] - lastpos >= mid)
    {
        cowCount++;
        if(cowCount == m)
        {
            return true;
        }
        lastpos = arr[i];
    }
   }
   return false;
}
int findAns(vector <int> arr ,int m , int n)
{
  int start = 0;
   int maxi = -1;
   for(int i = 0 ; i<n ; i++)
   {
     maxi = max(maxi , arr[i]);
   }
   int end = maxi;
   int ans = -1;
   int mid = start + (end - start)/2;
  while(start <= end)
  {
    if(isPossible(arr , m , n , mid))
    {
          ans = mid;
          start = mid +1;
    }
    else
    {
        end = mid - 1;
    }
    mid = start + (end - start)/2;
  }
  return ans;
}
int main(int argc, char const *argv[])
{
    int m, n;
    cout << "Enter the number of stalls : ";
    cin >> n;
    cout <<"Enter the number of cows : ";
    cin >> m;
    vector <int> arr(n);
    cout <<"Enter the position of each stall : ";
    for(int i = 0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin() , arr.end());
     cout <<findAns(arr , m , n);
    return 0;
}