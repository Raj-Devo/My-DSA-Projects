#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Approach 1 : 
vector <int> twoPtr(vector <int> &arr ,int x , int k)
{
    int high = arr.size() - 1;
    int low = 0;
    while(high - low >= k)
    {
    int  diffHigh = abs(arr[high] - x);
    int diffLow = abs(arr[low] - x);
    if(diffHigh < diffLow)
    {
        low++;
    }
    else
    {
          high--;
    }
    }
    vector <int> ans;
    for(int i = low ; i<= high ; i++)
    {
        ans.push_back(arr[i]);
    }
    return ans;
}
//Approach 2 : 
int lowerBound(vector <int> &arr , int x)
{
    int start = 0;
    int end = arr.size()-1;
    // we dont use (start + end)/2 to avoid integer overflow;
    int mid = start + (end - start)/2;
    int ans = end;
    while(start <=  end) 
    {
        int element = arr[mid];
        // if element is found
        if(element >= x)
        {
           ans = mid;
           end = mid - 1;
        }
        // element is smaller , i.e , it is in left of mid--
    else if ( element < x)
        {
            //changing end to half the vector --
          start = mid+1;
        }
        //changing mid to traverse--
        mid = start + ( end - start ) / 2;
    }
      return ans;
}
vector <int> searchMethod(vector <int> arr , int x , int k)
{
    int high = lowerBound(arr , x);
    int low = high - 1;
    while( k--)
    {
    int  diffHigh = abs(arr[high] - x);
    int diffLow = abs(arr[low] - x);
    if(low < 0)
    {
        high++;
    }
    else if(high >= arr.size())
    {
        low--;
    }
   else  if(diffHigh < diffLow)
    {
        high++;
    }
    else
    {
        low--;
    }
    }
    vector <int> ans;
    for(int i = low+1 ; i<= high-1 ; i++)
    {
        ans.push_back(arr[i]);
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n , x , k;
    cout <<"Enter the size of the array : ";
    cin >> n;
    vector <int> arr(n);
    cout <<"Enter the array elements : ";
    for(int i = 0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
     cout <<"Enter value of x : ";
     cin >> x;
     cout <<"Enter number of closest elements(k) : ";
     cin >>k;
     sort(arr.begin() , arr.end());
    //  vector <int> ans = twoPtr( arr , x , k);
    vector <int> ans = searchMethod( arr , x , k);
     for(auto val : ans)
     {
        cout <<val <<" ";
     }
    return 0;
}
