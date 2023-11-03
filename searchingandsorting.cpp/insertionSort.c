#include<stdio.h>
int main(int argc, char const *argv[])
{
     int n;
    printf("Enter the size of array : ");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d" , &arr[i]);
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
        printf("Sorted array : ");
        for(int i = 0 ; i<n ; i++)
        {
            printf("%d " , arr[i]);
        }
    return 0;
}