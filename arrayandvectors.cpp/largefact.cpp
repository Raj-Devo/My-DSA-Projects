#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> largeFact(int n)
{
    vector <int> ans;
    ans.push_back(1);
    int carry = 0;
    for(int i = 2 ; i<=n ; i++)
    {
        for(int j = 0 ; j< ans.size() ; j++)
        {
            int x = ans[j] * i + carry;
            ans[j] = x%10;
            carry = x/10;
        }
        while(carry)
        {
            ans.push_back(carry);
            carry = carry / 10;
        }
    }
   reverse(ans.begin() , ans.end());
   return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the number : ";
    cin >> n;
   vector <int> fact = largeFact(n);
   cout <<"Factorial : ";
    for(auto val : fact)
    {
        cout <<val;
    }
    cout <<endl;
    return 0;
}
