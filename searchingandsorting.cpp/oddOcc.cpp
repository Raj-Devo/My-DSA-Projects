#include <iostream>
#include <vector>
using namespace std;
int solveArray(vector <int> arr)
{
   int start = 0;
   int end = arr.size() - 1;
   int mid = start + (end - start)/2;
   while(start <= end)
   {
    //element found--
    if(start == end)
    {
        return start;
    }
    // other two cases if mid-> even || mid-> odd--
    if(mid % 2 == 0)
    {
        if(arr[mid+1] == arr[mid])
        {
            start = mid + 2;
        }
        else
        {
          end = mid;
        }
    }
     else
        {
           if(arr[mid-1] == arr[mid])
           {
                   start = mid+1;
           }
           else
           {
            end = mid - 1;
           }
        }
       mid = start + (end - start)/2; 
   }
   return - 1;
}
int main(int argc, char const *argv[])
{
   vector <int> arr{1,1,2,2,3,3,4,4,3,3,600,600,234};
   cout <<"Index : " <<solveArray(arr) <<endl;
   cout <<"Element : " <<arr[solveArray(arr)] <<endl;
   return 0;
}
