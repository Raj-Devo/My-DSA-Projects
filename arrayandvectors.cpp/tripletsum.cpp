#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the size of the array : ";
    cin>>n;
    vector <int> arr(n);
    cout <<"Enter the array elements : " <<endl;
for (int i = 0; i < n; i++)
{
   cout <<"Enter element " <<i+1 <<" : ";
   cin >> arr[i];
}
for(auto val : arr)
{
    cout <<val <<" ";
}
int sum;
cout <<endl;
cout <<"Enter the sum you want to find : ";
cin >>sum;
for(int i = 0 ; i <n ; i++)
{
    int element1 = arr[i];
    for(int j = i+1 ; j<n ; j++)
    {
        int element2 = arr[j];
        for(int k = j+1 ; k<n ; k++)
        {
          int element3 = arr[k];
        if(element1 + element2 + element3 == sum)
        {
            cout <<"Sum is found by triplet " <<element1 <<" " <<element2 <<" " <<element3<<endl;
        }
        else
        {
          cout <<"Sum is not found" <<endl;
        }
        }
    }
}
    return 0;
}