//  Place n quuens in a n x n board such that all quuens are safe
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<int , bool> rowCheck;
unordered_map<int , bool> uppDiagCheck;
unordered_map<int , bool> lowDiagCheck;
void printSol(vector <vector<char>> board , int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            cout <<board[i][j] <<" ";
        }
         cout <<endl;
    }
    cout <<endl <<endl;
}
bool isSafe(vector <vector <char>> board , int row , int col,int n)
{
    if(rowCheck[row] == true)
    return false;
    if( uppDiagCheck[n-1+col-row] == true)
    return false;
    if( lowDiagCheck[col+row] == true)
    return false;
    return true;
}





// bool isSafe( vector <vector <char>> board , int row , int col,int n)
// {
//   // Left Row ke liye check;
//   int i = row ;
//   int j = col;
//     while(j>= 0)
//     {
//         if(board[i][j] =='Q')
//         {
//         return false;
//         }
//         j--;
//     }

//     //Upper left diagonal ke liye check--
//       i  = row;
//       j = col;
//      while(i>= 0 && j >=0)
//      {
//         if(board[i][j] == 'Q')
//         return false;
//        i--;
//        j--;
//      }

//      //Lower left diagonal ke liye check--
//     i = row;
//      j = col;
//     while(i<n && j >=0)
//     {
//        if(board[i][j] == 'Q')
//        return false;
//        i++;
//        j--;
//     }
//   return true;
// }
void solveQueen(vector <vector<char>> &board , int col , int n)
{
    //Base Case--
    if(col >= n)
    {
        printSol(board , n);
        return;
    }


    // COL = 0 ke liye check karna hai--
    for(int row = 0 ; row <n ; row++)
    {
        if(isSafe(board , row , col , n))
        {

            //  Rakh do --
            board[row][col] = 'Q';
            rowCheck[row] = true;
            uppDiagCheck[n-1+col-row] = true;
            lowDiagCheck[col+row] = true;
            //recursive calls--
            solveQueen(board , col+1 , n );

            //Backtracking--
            board[row][col] = '-';
            rowCheck[row] = false;
            uppDiagCheck[n-1+col-row] = false;
            lowDiagCheck[col+row] = false;
        }
    }
}
int main(int argc, char const *argv[])
{
    int n = 5;
    vector <vector<char>> board( n , vector<char>(n , '-'));
    int col = 0;
     solveQueen(board ,  col , n);
    return 0;
}
