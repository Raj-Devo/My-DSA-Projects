#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m;
    cout << "Enter the number of rows in vector : ";
    cin >> m;
    cout << "Enter the number of columns in vector : ";
    cin >> n;
    int arr[m][n];
    cout << "Enter the vector elements : " << endl;
    ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int total_elements = m * n;
    int count = 0;
    int startingRow = 0;
    int endingCol = n - 1;
    int endingRow = m - 1;
    int startingCol = 0;
    while (count < total_elements)
    {
        // printing StartingRow --
        for (int i = startingCol; i <= endingCol && count <total_elements; i++)
        {
            cout << arr[startingRow][i] <<" ";
            count++;
        }
        startingRow++;
        // Printing endingCol--
        for (int i = startingRow ; i <= endingRow && count <total_elements ; i++)
        {
            cout << arr[i][endingCol] <<" ";
             count++;
        }
        endingCol--;
        // printing endingRow--
        for (int i = endingCol; i >= startingCol && count <total_elements ; i--)
        {
            cout << arr[endingRow][i] <<" ";
             count++;
        }
        endingRow--;
        // printing startingCol--
        for (int i = endingRow; i >= startingRow && count < total_elements; i--)
        {
            cout << arr[i][startingCol] <<" ";
             count++;
        }
        startingCol++;
    }
    return 0;
}
