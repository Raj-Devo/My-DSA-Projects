#include <iostream>
using namespace std;
void printArray(int arr[] , int n , int index)
{
    if(index >= n )
    return;
    cout <<arr[index] <<" ";
    printArray( arr , n , index + 1);
}
int main(int argc, char const *argv[])
{
    int arr[5] = { 10, 20 , 30 , 40 , 50};
    int n = 5;
    int index = 0;
    printArray(arr , n , index);
    return 0;
}
