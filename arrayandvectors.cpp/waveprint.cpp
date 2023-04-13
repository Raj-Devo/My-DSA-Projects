#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n , m;
    cout <<"Enter the number of rows in vector : ";
    cin >> n;
    cout <<"Enter the number of columns in vector : ";
    cin >> m;
    int arr[n][m];
    cout <<"Enter the vector elements : " <<endl;;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout <<"Wave form : " <<endl;
    for(int col = 0; col<m ; col++)
    {
        if(col%2 == 0)
        {
            for(int row = 0; row <n ; row++)
            {
                cout <<arr[row][col] <<" ";
            }
        }
        else
        {
            for(int row = n-1 ; row>=0 ; row--)
            {
                cout <<arr[row][col] <<" ";
            }
        }
    }
    return 0;
}
