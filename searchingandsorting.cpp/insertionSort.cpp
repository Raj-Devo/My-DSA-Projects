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
    // Insertion Sort --
    for(int i = 1 ; i <n ; i++)
    {
        //Step 1 : Fetch :
        int val = arr[i];
        //Step 2 : Compare : 
        int j = i - 1;
        while(j>=0)
        {
            if(arr[j] >val)
            {
                //Step 3 : Shift : 
                arr[j+1] = arr[j];
            }
            else
            {
                //Rukna hai--
                break;
            }
            j--;
        }
        //Step 4 : Contain : 
         arr[j+1] = val;
    }
        cout <<"Sorted array : ";
    for(auto val : arr)
    {
        cout <<val <<" ";
    }
    return 0;
}
