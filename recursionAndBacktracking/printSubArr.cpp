#include <iostream>
#include <vector>
using namespace std;
void solve(vector <int> arr , int i , vector <int> ans)
{
    //Base Case --
    if(i >= arr.size())
    {
        for(auto val : ans)
        {
            cout <<val <<" ";
        }
        cout <<endl;
        return;
    }
        //exclude --
        solve(arr , i+1 , ans);
        //include ---
        ans.push_back(arr[i]);
        solve(arr , i+1 , ans);
    } 
int main(int argc, char const *argv[])
{
    vector <int> arr{1 , 2 };
    int index = 0;
    vector <int> ans;
    solve(arr , index , ans);
    return 0;
}
