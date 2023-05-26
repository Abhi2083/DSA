#include <iostream>
using namespace std;

const int N = 3;  // Assuming a square matrix of size 3x3

void rotateMatrix(int arr[][N], int row, int col, int k)
{
    // Calculate the actual number of rotations (taking modulo)
    k = k % 4;
    
    // Perform the rotations
    for (int r = 0; r < k; r++)
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
}

void printMatrix(int arr[][N], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[N][N] = {0};

    cout << "Enter the matrix (" << N << "x" << N << "):" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    int rotations;
    cout << "Enter the number of rotations: ";
    cin >> rotations;

    cout << "Original Matrix:" << endl;
    printMatrix(arr, N, N);

    rotateMatrix(arr, N, N, rotations);

    cout << "Rotated Matrix:" << endl;
    printMatrix(arr, N, N);

    return 0;
}
