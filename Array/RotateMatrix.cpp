#include <iostream>
using namespace std;

void rotateMatrix(int arr[][4], int row, int col)
{
    // Step 1: Find transpose of the given matrix
    int temp;
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;
        }
    }

    // Step 2: Swap the 1st and last column
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col / 2; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[i][col - 1 - j];
            arr[i][col - 1 - j] = temp;
        }
    }
}

int main()
{
    int arr[4][4] = {0};

    cout << "Enter the matrix (3x3):" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rotateMatrix(arr, 4, 4);

    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
