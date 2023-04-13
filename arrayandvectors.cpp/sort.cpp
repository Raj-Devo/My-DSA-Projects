#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> arr{1,0,0,1,1,0,1,1,0,0};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    cout <<"Before : " <<endl;
        for(auto val : arr)
    {
        cout <<val <<" ";
    }
    cout <<endl;
    while(i != end)
    {
        if(arr[i] == 0)
        {
            swap(arr[start] , arr[i]);
            i++;
            start++;
        }
        if(arr[i] == 1)
        {
            swap(arr[end] , arr[i]);
            end--;
        }
    }
    cout <<"After : " <<endl;
    for(auto val : arr)
    {
        cout <<val <<" ";
    }
    return 0;
}
