#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the size of the array : ";
    cin >> n;
    vector <int> arr(n);
    // 1 is the pivot point;
    // high is the point in right of pivot;
    int high = arr.size() - 1;
    // low is the point in left of pivot;
    int low = 0;
    cout <<"Enter 0 , 1 , 2 as elements of the vector : ";
    for(int i = 0 ; i<n ; i++)
    {
        cin >>arr[i];
    }
    cout <<"Unsorted vector : " <<endl;
    for(auto val : arr)
    {
        cout <<val <<" ";
    }
    // i will traverse the full array;
    int i = 0; 
    while(i <= high )
    {
        // this puts all the 0s in left of pivot , i.e , 1;
        if(arr[i] == 0)
        {
            swap(arr[low] , arr[i]);
            low++;
            i++;
        }
        // this puts all the 2s in right of the pivot , i.e , 1;
                else if(arr[i] == 2)
        {
            swap(arr[high] , arr[i]);
            high--;
        }
        // this just traverse the array;
       else
        {
            i++;
        }
    }
    cout <<"\nSorted vector : " <<endl;
    for(auto val : arr)
    {
        cout <<val <<" ";
    }
    return 0;
}
