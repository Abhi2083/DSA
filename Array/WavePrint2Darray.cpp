#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int printWave(int arr[][2], int row, int col)
{
    // Write your code here
    for (int i = 0; i < col; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
    return arr[row][col];
}

int main()
{
    int arr[2][2] = {0};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            cout << arr[a][b] << " ";
        }
        cout << endl;
    }
    cout << endl;
    printWave(arr, 2, 2);
    return 0;
}