#include <iostream>
#include <vector>
#include <string>
using namespace std;
    int myAtoi(string s) 
    {
        string ans;
        int n;
        for(int i = 0 ; i<s.length() ; i++)
        {
            if(isdigit(s[i]) || s[i] != '0' || s[i] == '+' || s[i] == '-')
            {
               ans.push_back(s[i]);
            }
        }
        if( ans[0] == '-')
        {
           n = -1 * stoi(ans);
        }
        else
        {
            n = stoi(ans);
        }
        return n;
    }
int main(int argc, char const *argv[])
{
    string s;
    s = "-430";
    int n =myAtoi(s);
    cout <<n <<endl;
    return 0;
}
