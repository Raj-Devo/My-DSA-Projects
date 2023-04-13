#include <iostream>
#include <vector>
using namespace std;
int binaryDivide(int dividend , int divisor)
{
    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start)/2;
    int ans = 0;
    while(start <= end)
    {
       if(abs(mid*divisor) <= abs(dividend))
       {
          ans = mid;
          start = mid + 1;
       }
       else
       {
           end = mid -1;
       }
       mid = start + (end - start)/2;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int dividend , divisor , precision;
    cout <<"Enter the dividend : ";
    cin >> dividend;
    cout <<"Enter the divisor : ";
    cin >>divisor;
    double quotient = (double)binaryDivide(dividend , divisor);
    cout <<"Enter upto what decimal places you want to correct : ";
    cin >> precision;
    double step = 0.1;
    // outer loop runs for giving decimal values
    for(int i = 0; i<precision ; i++)
    {
        // this loop checks the correct answer--
        for(double j = quotient ; j * abs(divisor) <= abs(dividend) ; j = j + step)
        {
            quotient = j;
        }
        // this updation takes us to next decimal value
        step = step / 10;
    }
    cout <<endl <<endl <<"==========================" <<endl <<endl;
    cout <<"Dividend : " <<dividend <<endl;
    cout <<"Divisor : " <<divisor <<endl;
   if((divisor > 0 && dividend > 0) || (divisor < 0 && dividend < 0) )
   {
     cout <<"Quotient : " <<quotient <<endl;
   }
   else
   {
      cout <<"Quotient : " <<(-1 * quotient) <<endl; 
   }
    return 0;
}