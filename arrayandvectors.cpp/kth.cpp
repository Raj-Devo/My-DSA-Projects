#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter size of vector : ";
    cin >> n;
    vector <int> arr(n);
    cout <<"Enter the elements of vector : ";
    for(int i = 0; i<arr.size() ; i++)
    {
        cin >>arr[i];
    }
    int k;
    cout <<"Enter the value of k : ";
    cin >> k;
    sort(arr.begin() , arr.end());
    cout <<"Kth highest element : " <<arr[n-k] <<endl;
    return 0;
}