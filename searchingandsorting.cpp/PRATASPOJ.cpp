#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector <int> arr , int n , int m , int mid)
{
        int pCount = 0;
        for(int i = 0; i<n ; i++)
        {
            int Rank = arr[i];
        int timeTaken = 0;
        int j = 1;
        while(1)
        {
            if(timeTaken + j*Rank <= mid)
            {
                pCount++;
                timeTaken += j*Rank;
                j++;
            }
            else
            {
                break;
            }
        }
        if(pCount >= m)
        {
            return true;
        }
        }
        return false ;
}
int findAns(vector <int> arr , int n , int m)
{
    int start = 0;
    int sum = 0;
    int highestRank = *max_element(arr.begin() , arr.end());
     int end = highestRank * ( m * (m+1) / 2);
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end)
    {
        if(isPossible(arr , n , m ,mid))
        {
           ans = mid;
           end = mid -1;
        }
        else
        {
            start = mid + 1;
        }
         mid = start + (end - start)/2;
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
