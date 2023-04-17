#include <iostream>
using namespace std;
void mergeArr( int *arr , int s , int e)
{
    int mid = s + (e-s)/2;

   //Giving the length--
    int len1 = mid - s + 1;
    int len2 = e - mid;

  //Creating the Arrays--
    int *left = new int[len1];
    int *right = new int[len2];

//Copy the values  left array--
int k = s;
 for(int i = 0 ; i< len1 ; i++)
 {
    left[i] = arr[k++];
 }
 // copy value in right array--
  k = mid+1;
 for(int i = 0; i<len2 ; i++)
 {
    right[i] = arr[k++];
 }

 //merge logic --
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = s;
    while(leftIndex<len1 && rightIndex<len2)
    {
        if(left[leftIndex] < right[rightIndex])
        {
            arr[mainIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainIndex++] = right[rightIndex++];
        }
    }
    while(leftIndex < len1)
    {
         arr[mainIndex++] = left[leftIndex++];
    }
    while(rightIndex < len2)
    {
        arr[mainIndex++] = right[rightIndex++];
    }
}
int mergeSort(int *arr , int s , int e)
{
    //Base Case--
    int inv = 0;
    if(s >= e)
    return inv;
    int mid = s + (e-s)/2;
    //Left array--
    inv += mergeSort(arr , s , mid);
    //Right array--
   inv += mergeSort(arr , mid+1 , e );
    //Merge
    mergeArr(arr , s , e);
}
int main(int argc, char const *argv[])
{
    int arr[] = {1 , 5 , 8 };
    int n = 10;
    int s = 0;
    int e = n - 1;
    int inv = mergeSort(arr , s ,e);
    cout <<inv <<endl;
    return 0;
}