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
    for(int round = 1; round < n ; round++)
    {
        for(int j = 0 ; j < n - round; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] ,arr[j+1]);
            }
        }
    }
        cout <<"Sorted array : ";
    for(auto val : arr)
    {
        cout <<val <<" ";
    }
    return 0;
}