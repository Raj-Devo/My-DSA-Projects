#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the size of the vector : ";
    cin >>n;
    vector <int> arr(n);
    cout <<"Enter the elements of the vector : ";
    for(int i = 0 ; i<arr.size() ; i++)
    {
        cin>>arr[i];
    }
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while(i != end)
    {
        if(arr[i] < 0)
        {
            swap(arr[start] , arr[i]);
            i++;
            start++;
        }
        else
        {
            swap(arr[end] , arr[i]);
            end--;
        }
    }
      
    cout <<"Sorted vector : " <<endl;
    for(auto val : arr)
    {
        cout <<val <<" ";
    }
    return 0;
}
