#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int comp(vector <char> &s)
{
    int count = 1 , index = 0;
    char prev = s[0];
    for(int i = 1 ; i< s.size() ; i++)
    {
           if(s[i] == prev)
           {
            count ++;
           }
           else
           {
            s[index++] = prev;
            if(count > 1)
            {
                int start = index;
                while(count)
                {
                    s[index++] = (count % 10) + '0';
                    count /= 10;
                }
                reverse(s.begin() + start , s.end() + index);
            }
            prev = s[i];
            count = 1;
           }
    }
                s[index++] = prev;
            if(count > 1)
            {
                int start = index;
                while(count)
                {
                    s[index++] = (count % 10) + '0';
                    count /= 10;
                }
                reverse(s.begin() + start , s.end() + index);
            }
            return index;
}
int main(int argc, char const *argv[])
{
    vector <char> str;
    cout <<"Enter the string : ";
       for( int i = 0 ; i<str.size() ; i++)
       {
        cin >> str[i];
       }
    int n = comp(str);
    cout <<n <<endl;
    return 0;
}
