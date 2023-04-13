//Time Complexity : O(logn)
#include <iostream>
#include <vector>
using namespace std;
int binarySearch( vector <int> arr ,  int target)
{
      int start = 0;
    int end = arr.size()-1;
    // we dont use (start + end)/2 to avoid integer overflow;
    int mid = start + (end - start)/2;
    while(start <=  end) 
    {
        // if element is found
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(mid - 1 >= start && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if(mid + 1 <= end && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        // element is smaller , i.e , it is in left of mid--
    else if (target < arr[mid])
        {
            //changing end to half the vector --
            end = mid - 2;
        }
        // element is bigger , i.e , it is in the right of mid --
        else
        {
             //changing start to half the vector --
            start = mid + 2 ;
        }
        //changing mid to traverse--
        mid = start + ( end - start ) / 2;
    }
      //element not found--
      return -1;
}
int main(int argc, char const *argv[])
{
    int n , target;
    cout <<"Enter the size of the array : ";
    cin >> n;
    vector <int> arr(n);
    cout <<"Enter the array elements as nearly sorted : ";
    for(int i = 0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    cout <<"Enter the target to be found : ";
    cin >> target;
    int index = binarySearch(arr ,  target);
    if (index == -1)
    {
        cout <<"Element not found" <<endl;
    }
    else
    {
        cout <<"Element found in index : " <<index <<endl;
    }
    return 0;
}