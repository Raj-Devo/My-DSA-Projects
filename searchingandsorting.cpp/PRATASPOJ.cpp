#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector <int> arr , int n , int m , int mid)
{
        int pCount = 0
        ;
        for(int i = 0 ; i<n ; i++)
        {
            int time = 0;
            int j = 1;
            int rank = arr[i];
            while(1)
            {
                if(j*rank + time  <= mid)
                {
                    time += j*rank;
                    pCount++;
                    j++;
                }
                else
                {
                    break;
                }
            }
        }
        if(pCount>= m)
        {
            return true;
        }
        return false;
}
int findAns(vector <int> arr , int n , int m)
{
   int s = 0;
   sort(arr.begin() , arr.end());
   int highestRank = arr[n-1];
   int e = highestRank* (n*(n+1)/2);
   int mid = s +(e-s)/2;
   int ans = -1;
   while(s <= e)
   {
    if(isPossible( arr , n , m , mid))
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
    int n , m ;
    cout <<"Enter the number of parathas : ";
    cin >> m ;
    cout <<"Enter the number of cooks : ";
    cin >> n;
    vector <int> arr(n);
    cout <<"Enter the rank of each cook(1-8) : ";
    for(int i = 0; i< n; i++)
    {
        cin >>arr[i];
    }
     int ans = findAns(arr , n , m);
     cout <<ans <<endl;
    return 0;
}
