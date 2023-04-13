#include <iostream>
#include <vector>
using namespace std;
int peakElement( vector <int> arr)
{
    int start = 0;
    int end = arr.size() -1;
    int mid = start + (end - start)/2;
    while(start < end)
    {
        // searching in the increasing peak
        if(arr[mid] < arr[mid+1])
        {
            // peak  element cannot  be less .. so we move to the right
            start = end + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return arr[start-1];
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the size of the array : ";
    cin >> n;
    vector <int> arr(n);
    cout <<"Enter the array elements : ";
    for(int i = 0; i<arr.size() ; i++)
    {
        cin >>arr[i];
    }
    int maxi = peakElement(arr);
    cout <<"Peak element : " <<maxi <<endl;
    return 0;
}

