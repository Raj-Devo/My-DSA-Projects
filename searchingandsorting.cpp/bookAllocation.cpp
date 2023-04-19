#include <iostream>
#include <vector>
using namespace std;
bool isPossible(int mid , vector <int> arr , int n, int m)
{
  int stdcount = 1;
  int pageSum = 0;
  for(int i = 0; i<n ; i++)
  {
    if(pageSum + arr[i] <= mid)
    {
      pageSum += arr[i];
    }
    else
    {
      stdcount++;
      if(stdcount > m || arr[i] > mid)
      {
        return false;
      }
    }
  }
  return true;
}
int findAns(vector <int> arr , int m , int n)
{
  int s = 0;
  int e = 0;
  int ans;
  for(int i = 0 ; i<n ; i++)
  {
    e += arr[i];
  }
  int mid = s + (e-s)/2;
  while(s<=e)
  {
    if(isPossible(mid , arr , n , m))
    {
          ans = mid;
          e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
     mid = s + (e-s)/2;
  }
  return ans;
}
int main(int argc, char const *argv[])
{
    int m, n;
    cout << "Enter the number of books : ";
    cin >> n;
    cout <<"Enter the number of students : ";
    cin >> m;
    vector <int> arr(n);
    cout <<"Enter the pages of each book : ";
    for(int i = 0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
     cout <<findAns(arr , m , n);
    return 0;
}
