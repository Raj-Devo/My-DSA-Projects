#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
   vector <int> arr {1 , 5 , 10 , 20 , 40 , 80};
   vector <int> brr {6 , 7 , 20 , 80 ,100};
   vector <int> crr {3 ,4 ,15 , 20 ,30 , 70 ,80};
   int i = 0;
   int j = 0;
   int k = 0;
   while (i < arr.size() && j < brr.size() && k < crr.size() )
   {
    if(arr[i] == brr[j] && brr[j]== crr[k])
    {
        cout <<arr[i] <<" ";
        i++;
        j++;
        k++;
    }
   else if(arr[i] < brr[j])
   {
    i++;
   }
      else if(brr[j] < crr[k])
   {
    j++;
   }
   else
   {
     k++;
   }
   }
    return 0;
}
