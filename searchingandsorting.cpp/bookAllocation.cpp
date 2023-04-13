#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector <int> arr , int  m , int n , int mid)
{
    int studentCount = 1;
    int pageSum = 0;
  for(int i = 0; i<n ; i++)
  {
    if(arr[i] + pageSum <= mid)
    {
        pageSum += arr[i];
    }
    else
    {
        studentCount++;
        if( studentCount > m || arr[i] > mid )
        {
            return false ;
        }
        pageSum = arr[i];
    }
  }
  return true;
}
int findAns(vector <int> arr ,int m , int n)
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
    if(isPossible(arr , m , n , mid))
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
