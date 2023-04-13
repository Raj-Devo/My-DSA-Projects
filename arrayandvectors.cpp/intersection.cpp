#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n , m;
    cout <<"Enter the size of array 1 : ";
    cin>>n;
    cout <<"Enter the size of array 2 : ";
    cin>>m;
    vector <int> arr(n);
    vector <int> brr(m);
    vector <int> inter;
        cout <<"Enter the elements of array 1 : " <<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout <<"enter element "  <<i+1 <<" : ";
        cin>>arr[i];
    }
        cout <<"Enter the elements of array 2 : " <<endl;
    for(int i = 0 ; i<m ; i++)
    {
        cout <<"enter element "  <<i+1 <<" : ";
        cin>>brr[i];
    }
    for(int i = 0 ; i<n ; i++)
    {
        int element = arr[i];
        for(int j = 0 ; j<m ; j++)
        {
            if(element == brr[j])
            {
            brr[j] = INT_MIN;
            inter.push_back(element);
            }
        }
    }
    cout <<"The intersection array is : " <<endl;
    for(int i = 0 ; i<inter.size() ; i++)
    {
       cout<<inter[i] <<" ";
    } 
    return 0;
}


