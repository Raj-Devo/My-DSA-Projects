#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector <int> arr , int  k , int n , int mid)
{
    int painterCount = 1;
    int timeSum = 0;
  for(int i = 0; i<n ; i++)
  {
    if(arr[i] + timeSum <= mid)
    {
        timeSum += arr[i];
    }
    else
    {
        painterCount++;
        if( painterCount > k || arr[i] > mid )
        {
            return false ;
        }
        timeSum = arr[i];
    }
  }
  return true;
}
int findAns(vector <int> arr ,int k , int n)
{
  int start = 0;
  int sum = 0;
  int ans = -1;
  for(int i = 0 ; i<n; i++)
  {
    sum += arr[i];
  }
  int end = sum;
  int mid = start + (end - start)/2;
  while(start <= end)
  {
    if(isPossible(arr , k , n , mid))
    {
          ans = mid;
          end = mid - 1;
    }
    else
    {
        start = mid +1 ;
    }
    mid = start + (end - start)/2;
  }
  return ans;
}
int main(int argc, char const *argv[])
{
    int k, n;
    cout << "Enter the number of boards : ";
    cin >> n;
    cout <<"Enter the number of painters : ";
    cin >> k;
    vector <int> arr(n);
    cout <<"Enter the time taken to paint each board : ";
    for(int i = 0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
     cout <<findAns(arr , k , n);
    return 0;
}