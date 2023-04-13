  #include <iostream>
  #include <vector>
  #include <string>
  using namespace std;
  void solve( vector <string> &ans , int i , string output , vector <string> &mapping , string &digits )
  {
      //Base case--
      if(i >= digits.length())
      {
          ans.push_back(output);
          return;
      }

      //include --
      char digitchar = digits[i];
      int digi = digitchar - '0';
      string val = mapping[digi];
      for(int j = 0 ; j<val.length() ; j++)
      {
          output.push_back(val[j]);
          solve(ans , i+1 , output , mapping , digits);
          output.pop_back();
      }
  }
    vector<string> letterCombinations(string digits) {
        vector <string> ans;
        int index = 0;
        string output = "";
        vector <string> mapping(10);
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";
        if(digits.length() == 0)
        return ans;
        solve (ans , index , output , mapping , digits);
        return ans;
    }
    int main(int argc, char const *argv[])
    {
        string digits = "24";
        vector <string> ans = letterCombinations(digits);
        for(auto val : ans)
        {
             cout <<val <<endl;
        }
        return 0;
    }
    