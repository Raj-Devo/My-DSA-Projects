#include <iostream>
#include <vector>
#include <algorithm>
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
    sort(arr.begin() , arr.end());
        cout <<"Sorted array : ";
    for(auto val : arr)
    {
        cout <<val <<" ";
    }
    return 0;
}
