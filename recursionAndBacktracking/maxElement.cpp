#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void maxElement( vector <int> arr , int n , int index , int &maxi)
{
    if(index >= n)
    return;
         if(arr[index] >= maxi)
    {
        maxi = arr[index];
    }
      maxElement( arr , n , index  +1 , maxi);
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the size of the array : ";
    cin >> n;
    vector <int> arr(n);
    cout <<"Enter the array elements : ";
    for(int i = 0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
   int index = 0;
   int maxi = INT_MIN;
   maxElement(arr , n , index , maxi);
   cout <<"Max element : " <<maxi <<endl;
    return 0;
}
