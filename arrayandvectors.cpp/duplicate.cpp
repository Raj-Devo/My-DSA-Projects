#include <iostream>
#include <vector>
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
    for(int i = 0 ; i < arr.size() ; i++)
    {
        int index = abs(arr[i]);
        if(arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }
    for(int i = 0 ; i< arr.size() ; i++ )
    {
        if(arr[i] > 0)
        cout <<arr[i];
    }
    return 0;
}
