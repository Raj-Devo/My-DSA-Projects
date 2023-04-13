#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the size of array 1 : ";
    cin >> n;
    int m;
    cout <<"Enter the size of array 2 : ";
    cin >>m;
    cout <<"\nEnter elements of array 1 --" <<endl;
    vector <int> arr(n);
    vector <int> brr(m);
    for(int i = 0 ; i<n; i++)
    {
        cout <<"Enter element " <<i+1 <<" : ";
        cin >> arr[i];
    }
    cout <<"\nEnter elements of array 2 --" <<endl;
       for(int i = 0 ; i<n; i++)
    {
        cout <<"Enter element " <<i+1 <<" : ";
        cin >> brr[i];
    } 
    vector <int> uni;
    // Pushing elements of arr into union--
    for(int i = 0 ; i<n ; i++)
    {
        uni.push_back(arr[i]);
    }
    //Marking the commmon elements between brr and arr to avoid duplication --
        for(int i = 0 ; i<n ; i++)
    {
       int element = arr[i];
       for(int j = 0 ; j<m ; j++)
       {
          if(element == brr[j])
          {
            brr[j] = INT_MIN;
          }
       }
    }
    // Pushing the elements(uncommon) of brr into union --
    for(int j = 0 ; j<brr.size() ; j++)
    {
        if(brr[j] != INT_MIN)
        uni.push_back(brr[j]);
    }
    cout <<"\n The intersected array is : " <<endl;
    for(auto val : uni)
    {
       cout <<val << " ";
    }
    return 0;
}
