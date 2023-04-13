#include <iostream>
#include <vector>
using namespace std;
int firstOcc( vector <int> arr ,  int target)
{
      int start = 0;
    int end = arr.size()-1;
    // we dont use (start + end)/2 to avoid integer overflow;
    int mid = start + (end - start)/2;
    //initializing the answer
    int ans = -1;
    while(start <=  end) 
    {
        int element = arr[mid];
        // if element is found
        if(element == target)
        {
            //storing the answer--
            ans = mid;
            // searching in left for first occcurence--
            end = mid -1;
        }
        // element is smaller , i.e , it is in left of mid--
    else if (target < element)
        {
            //changing end to half the vector --
            end = mid - 1;
        }
        // element is bigger , i.e , it is in the right of mid --
        else
        {
             //changing start to half the vector --
            start = mid +1;
        }
        //changing mid to traverse--
        mid = start + ( end - start ) / 2;
    }
      //element not found--
      return ans;
}
int lastOcc( vector <int> arr ,  int target)
{
      int start = 0;
    int end = arr.size()-1;
    // we dont use (start + end)/2 to avoid integer overflow;
    int mid = start + (end - start)/2;
    //initializing the answer
    int ans = -1;
    while(start <=  end) 
    {
        int element = arr[mid];
        // if element is found
        if(element == target)
        {
            //storing the answer--
            ans = mid;
            // searching in right for last occcurence--
            start = mid + 1;
        }
        // element is smaller , i.e , it is in left of mid--
    else if (target < element)
        {
            //changing end to half the vector --
            end = mid - 1;
        }
        // element is bigger , i.e , it is in the right of mid --
        else
        {
             //changing start to half the vector --
            start = mid +1;
        }
        //changing mid to traverse--
        mid = start + ( end - start ) / 2;
    }
      //element not found--
      return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the size of the array : ";
    cin >> n;
    vector <int> arr(n);
    cout <<"Enter the array elements : ";
    for(int i = 0; i<arr.size() ; i++)
    {
        cin >>arr[i];
    }
    int target;
    cout <<"Enter the element to be counted : " ;
    cin >>target;
    int ctr = lastOcc(arr , target) - firstOcc(arr , target) + 1;
    if(ctr == 0)
    {
        cout <<"Element not found" <<endl;
    }
    else
    {
        cout <<"Element found : " <<ctr <<" times" <<endl;
    }
    return 0;
}
