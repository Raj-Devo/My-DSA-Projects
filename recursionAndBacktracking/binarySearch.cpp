#include <iostream>
#include <vector>
using namespace std;
int binarySearch( vector <int> &arr , int s , int e , int key)
{
    int mid = s + (e - s)/2;
    // Base Case --
    if( s > e)
    return -1;
    // Ek case hume sambhalna hai --
    if( arr[mid] == key)
    return mid;
    // Baki recursion dekh lega --
    if( arr[mid] > key)
    binarySearch(arr , s , mid - 1 , key);
    else
    binarySearch(arr , mid + 1 , e , key);
}
int main(int argc, char const *argv[])
{
    vector <int> arr {10 , 20 , 30 , 40 ,50 , 60};
    int key = 10;
   int n = arr.size();
  int e = n - 1;
  int s = 0;
  int ans = binarySearch( arr , s , e , key);
  cout <<ans <<endl;
    return 0;
}
