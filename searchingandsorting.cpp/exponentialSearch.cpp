#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarySearch( vector <int> arr , int start , int end,  int target)
{
     int mid = start + (end - start)/2;
    while(start <=  end) 
    {
        int element = arr[mid];
        // if element is found
        if(element == target)
        {
            return mid;
        }
        // element is smaller , i.e , it is in left of mid--
    else if (target < element)
        {
            //changing end to half the vector --
            end = mid - 1;
        }
        // element is bigger , i.e , it is in the right of mid --
        else
        {
             //changing start to half the vector --
            start = mid +1;
        }
        //changing mid to traverse--
        mid = start + ( end - start ) / 2;
    }
      //element not found--
      return -1;
}
int exponentialSearch(vector <int> arr , int target)
{
    int n = arr.size();
    if (arr[0] == target)
    {
        return 0;
    }
    int i = 1;
    while(i < n && arr[i] <= target)
    {
         i = i*2;
    }
    int ans = binarySearch(arr , i/2 , min(i , n-1) , target);
    return ans;
}
int main(int argc, char const *argv[])
{
    int n , target;
    cout <<"Enter the size of the array : ";
    cin >> n;
    vector <int> arr(n);
    cout <<"Enter the array elements : ";
    for(int i = 0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    cout <<"Enter the target to be found : ";
    cin >> target;
    sort(arr.begin() , arr.end());
    int ans = exponentialSearch(arr , target);
    if(ans == -1)
    {
        cout <<"Element not found" <<endl;
    }
    else
    {
        cout <<"Found at index : " <<ans;
    }
    return 0;
}
