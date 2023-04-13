#include <iostream>
#include <vector>
#include <string>
using namespace std;
  void solve(vector <string> &ans , int open , int close , string output , int n)
  {
      //Base Case--
      if(open <= 0 && close <=0)
      {
          ans.push_back(output);
          return;
      }

      //Open bracket ko include karo--
      if(open > 0)
      {
          output.push_back('(');
          solve(ans , open -1 , close , output , n);
          //BackTracking--
           output.pop_back();
      }


      //Close bracket ke liye call--
      if(close>open)
      {
          output.push_back(')');
          solve(ans , open , close -1 , output , n);
          //Backtracking--
           output.pop_back();
      }
  }
int main(int argc, char const *argv[])
{
    int n = 3;
    int open = n;
    int close = n;
    string output = "";
    vector <string> ans;
    solve(ans , open , close , output , n);
    for (auto val : ans)
    {
        cout <<val <<endl <<endl;;
    }
    return 0;
}
