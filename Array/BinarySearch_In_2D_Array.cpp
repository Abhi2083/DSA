#include <iostream>
using namespace std;

bool BinarySearch(int arr[][4], int row, int col, int key)
{
    int s = 0;
    int e = (row * col) - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        // by using mid we find the index of the middle element from the sorted linear matrix and then we find the row and col of that element in the 2D-matrix and store it and compare with the key
        int element = arr[mid / col][mid % col];
        if (element == key)
        {
            return 1;
        }
        else if (element < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
        return 0;
}
int main()
{
    int key;
    int arr[3][4] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Input Matrix:" << endl;
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 4; b++)
        {
            cout << arr[a][b] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Enter the key to be searched;- ";
    cin >> key;
    bool store = BinarySearch(arr, 3, 4, key);

    cout << "Found :- 1 <> Not found:- 0 ==>> " << store;
    return 0;
}