// Backtracking imp question
// Time complexity : exponential
#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isPossible(int i , int j , int row , int col ,
 vector <vector <bool>> visited , vector <vector <int>> maze )
 {
   if(((i < row && i>=0 )&&(j<col && j>=0))
   && (maze[i][j] == 1)
   && (visited[i][j] == false))
   {
    return true;
   }
   return false;
 }
void solvePath(vector <vector <int>> maze ,vector <vector <bool>> &visited,
 int i , int j , int row ,
 int col , vector <string> &path , string output )
 {
  //Base Case--
   if(i == row - 1 && j == col -1)
   {
    path.push_back(output);
    return;
   }
   
   //Solving the cases--

   //Down--
if(isPossible(i+1, j ,row , col , visited , maze))
{
   visited[i+1][j] = true;
   solvePath( maze , visited , i+1 , j , row , col , path , output + 'D' );
   // Backtracking--
   visited[i+1][j] = false;
}

   //Up--
if(isPossible(i-1, j ,row , col , visited , maze))
{
   visited[i-1][j] = true;
   solvePath( maze , visited , i-1 , j , row , col , path , output + 'U' );
   // Backtracking--
   visited[i-1][j] = false;
}

   //Right--
  if(isPossible(i, j+1 ,row , col , visited , maze))
{
   visited[i][j+1] = true;
   solvePath( maze , visited , i , j+1 , row , col , path , output + 'R' );
   // Backtracking--
   visited[i][j+1] = false;
}


   //Left--
  if(isPossible(i, j-1 ,row , col , visited , maze))
{
   visited[i][j-1] = true;
   solvePath( maze , visited , i , j-1 , row , col , path , output + 'L' );
   // Backtracking--
   visited[i][j-1] = false;
}
 }
int main(int argc, char const *argv[])
{
    vector<vector <int>> maze {{1,0,0,0},
                               {1,1,0,1},
                               {1,1,0,0},
                               {0,1,1,1}};

    int row = 4;
    int col = 4;
    vector <vector <bool>> visited(row , vector<bool>(col,false));
    visited [0][0] = true;
    vector <string> path;
    string output = "";
    if(maze[0][0] == 0)
    {
         cout <<"No path exists" <<endl;
    }
    solvePath(maze ,visited , 0 , 0 , row , col , path , output);
     if(path.size() == 0)
    {
        cout <<"No path exists" <<endl;
    }
    for(auto val : path)
    {
    cout <<val <<" ";
    }
    return 0;
}
