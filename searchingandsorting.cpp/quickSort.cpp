#include <iostream>
#include <algorithm>
using namespace std;
int partition(int *arr , int s , int e)
{
    //Choose the pivot element--
    int pivotIndex = s;
    int pivotElement = arr[s];
    //Place pivot element in right index--
    int count = 0;
    for(int i = s+1; i<= e; i++)
    {
        if(arr[i] <= arr[pivotIndex])
        count++;
    }
    int rightIndex = s + count;
    swap(arr[pivotIndex] , arr[rightIndex]);
    pivotIndex = rightIndex;
    //Left wale chotee and right wale bade--
    int i = s;
    int j = e;
    while(i < pivotIndex && j>pivotIndex)
    {
        while(arr[i] <= arr[pivotIndex])
        {
            i++;
        }
        while(arr[j] > arr[pivotIndex])
        {
            j--;
        }
        if(i < pivotIndex && j>pivotIndex)
            swap(arr[i] , arr[j]);
    }
    return pivotIndex;
}
void quickSort(int *arr , int s ,int e)
{
  // Base Case--
  if(s >= e)
  return;
  // Partition Logic--
  int p = partition(arr , s, e);
  //Left array recursive call--
  quickSort(arr , s , p-1);
  //Right Array recursive call--
  quickSort(arr , p+1 , e);
}
int main(int argc, char const *argv[])
{
    int arr[] = { 5 , 6 , 1 , 8 , 20 , 50 , 10 , 5 , 2 , 1 , 1};
    int n = 11;
    int s = 0;
    int e = n-1;
    quickSort(arr , s, e);
    for(int i = 0; i<n ; i++)
    {
        cout <<arr[i] <<" ";
    }
    cout <<endl;
    return 0;
}

