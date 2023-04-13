#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector <int> arr , int n , int m , int mid)
{
     int sum = 0;
     for(int i = 0 ; i<n ; i++)
     {
        int diff = arr[i] - mid;
        if(diff>0)
        {
            sum += diff;
        }
     }
     if(sum >= m)
     {
        return true;
     }
     else
     return false;
}
int findAns(vector <int> arr , int n , int m)
{
    int start = 0;
    int sum = 0;
    for(int i = 0 ; i<n ; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end)
    {
        if(isPossible( arr , n , m, mid))
        {
            //Storing answer --
           ans = mid;
           //Mid jitna badhega tree waste utna kam--
           //Searching in right--
           start = mid + 1;
        }
        else
        {
            //Searching in left--
          end = mid - 1;
        }
         mid = start + (end - start)/2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n , m;
    cout <<"Enter the number of trees : ";
    cin >> n;
    cout <<"Enter the amount of wood needed : ";
    cin >>m;
    vector <int> arr(n);
    cout <<"Enter the height of each tree : ";
    for(int i = 0 ; i<n ; i++)
    {
        cin >>arr[i];
    }
    sort(arr.begin() , arr.end());
    int ans = findAns(arr , n , m);
    cout <<ans;
    return 0;
}
