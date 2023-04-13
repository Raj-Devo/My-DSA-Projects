#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void minElement( vector <int> arr , int n , int index , int &mini)
{
    if(index >= n)
    return;
         if(arr[index] <= mini)
    {
        mini = arr[index];
    }
      minElement( arr , n , index  + 1 , mini);
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
   int mini = INT_MAX;
   minElement(arr , n , index , mini);
   cout <<"Min element : " <<mini <<endl;
    return 0;
}