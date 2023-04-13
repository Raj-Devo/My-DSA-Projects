#include <iostream>
#include <vector>
using namespace std;
// function to find unique element --
int findUnique(vector <int> arr)
{
  int ans = 0; // zero xor something is that number itself
  for(int i = 0 ; i<arr.size() ; i++)
  {
    ans = ans ^ arr[i];
  }
  return ans;
}
int main(int argc, char const *argv[])
{
    cout <<"Enter the number of elements in the array : ";
    int n;
    cin >> n;
    vector <int> arr(n);
    //input the elements --
    for(int i = 0 ; i<arr.size() ; i++)
    {
      cout <<"Enter element " <<i+1 <<" : ";
      cin>>arr[i];
    }
    // printing the array --
     for(int i = 0 ; i<arr.size() ; i++)
     {
      cout <<arr[i] <<" " ;
     }
     //calling the function --
     int unique = findUnique(arr);
     cout <<"\nThe unique element is : " <<unique <<endl;
    return 0;
}
