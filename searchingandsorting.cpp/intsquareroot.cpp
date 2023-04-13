#include <iostream>
#include <vector>
using namespace std;
int squareRoot(int n)
{
     int start = 0;
     int end = n;
     int mid = start + (end - start)/2;
     int ans = 0;
     while(start < end)
     {
        if(mid * mid == n )
        {
            // this is square root
            return mid;
        }
        else if(mid*mid > n)
        {
            // search left
            end = mid - 1;
        }
        else
        {
            //store answer
          ans = mid;
          //search right for closer answer
          start = mid +1;
        }
        mid = start + (end - start)/2;
     }
     return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the number whose square root is to be found : ";
    cin >> n;
    double sqrt = (double)squareRoot(n);
    int precision;
    //for decimal places
    cout <<"Enter upto what decimal places you want to correct : ";
    cin >> precision;
    double step = 0.1;
    // outer loop runs for giving decimal values
    for(int i = 0; i<precision ; i++)
    {
        // this loop checks the correct answer--
        for(double j = sqrt ; j*j <= n ; j = j + step)
        {
            sqrt = j;
        }
        // this updation takes us to next decimal value
        step = step / 10;
    }
    cout <<"Square root : " <<sqrt <<endl;
    return 0;
}
