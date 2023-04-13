#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the size of array : ";
    cin>>n;
    vector <int> arr(n);
    cout <<"Enter the array elements : ";
    for(int i = 0 ; i<n ; i++)
    {
        cin >>arr[i];
    }
    //selection sort-- TC = O(nsquare)--
         //outer loop for traversal of i--
    for(int i = 0; i < arr.size()-1 ; i++)
    {
     int minIndex = i;
     //Finding the minimum element--
     for(int j = i+1 ; j<arr.size(); j++)
     {
         if(arr[j] < arr[minIndex] )
         {
            //Updating the minimum index--
            minIndex = j;
         }
     }
      swap(arr[i] , arr[minIndex]);
    }
    cout <<"Sorted array : ";
    for(auto val : arr)
    {
        cout <<val <<" ";
    }
    return 0;
}
