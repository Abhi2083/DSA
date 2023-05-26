#include <iostream>
using namespace std;

void SpiralprintArray(int arr[][4], int row, int col)
{
    int SR = 0;
    int SC = 0;
    int ER = row - 1;
    int EC = col - 1;

    int count = 0;
    int total = row * col;

    while (count < total)
    {
        // Starting row
        for (int i = SC; count < total && i <= EC; i++)
        {
            cout << arr[SR][i] << " ";
            count++;
        }
        SR++;

        // Ending column
        for (int i = SR; count < total && i <= ER; i++)
        {
            cout << arr[i][EC] << " ";
            count++;
        }
        EC--;

        // Ending row
        for (int i = EC; count < total && i >= SC; i--)
        {
            cout << arr[ER][i] << " ";
            count++;
        }
        ER--;

        // Starting column
        for (int i = ER; count < total && i >= SR; i--)
        {
            cout << arr[i][SC] << " ";
            count++;
        }
        SC++;
    }
    // cout << endl << count << " " << total;

}

int main()
{
    int arr[4][4] = {0};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Input Matrix:" << endl;
    for (int a = 0; a < 4; a++)
    {
        for (int b = 0; b < 4; b++)
        {
            cout << arr[a][b] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Spiral Pattern Output:" << endl;
    SpiralprintArray(arr, 4, 4);

    return 0;
}
 