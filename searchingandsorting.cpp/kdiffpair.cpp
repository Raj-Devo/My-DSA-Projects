#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Approach 1 -- Binary Search : 
int binarySearch(vector <int> &arr , int num , int target)
{
    int start = num;
    int end = arr.size()-1;
    // we dont use (start + end)/2 to avoid integer overflow;
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
//Approach 2 :
int isFound(vector <int> &arr , int key)
{
    int ans = 0;
    int i = 0;
    int j = i + 1;
    while(j < arr.size())
    {
        int diff = arr[j] - arr[i];
        if(diff == key)
        {
           ans++;
           i++;
           j++;
        }
       else if(diff>key)
        {
             i++;
        }
        else
        {
            j++;
        }
        if(i==j)
        {
            j++;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n , k;
    cout <<"Enter the size of the array : ";
    cin >> n;
    vector <int> arr(n);
    cout <<"Enter the array elements : ";
    for(int i = 0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    cout <<"Enter the difference to be found : ";
    cin >> k;
    int ans = 0;
    for(int i = 0 ; i<arr.size() ; i++)
    {
        if(binarySearch(arr,arr[i+1],arr[i] + k) != -1)
        {
            ans++;
        }
    }
    cout <<"Number of pairs by binarySearch : " <<ans <<endl;
    cout <<"Number of pairs by approach 2 : " <<isFound(arr , k) <<endl;
    return 0;
}
