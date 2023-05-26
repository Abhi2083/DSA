#include <iostream>
using namespace std;
void printSumRowWise(int arr[][3], int i, int j)
{
    // row wise sum
    for (int a = 0; a < i; a++)
    {
        int sum = 0;
        for (int b = 0; b < j; b++)
        {
            sum = sum + arr[a][b];
        }
        cout << "Sum of row [" << a << "]:- " << sum;
        cout << endl;
    }
}

void printSumColWise(int arr[][3], int i, int j)
{
    // Col wise sum
    for (int b = 0; b < i; b++)
    {
        int sum = 0;
        for (int a = 0; a < j; a++)
        {
            sum = sum + arr[a][b];
        }
        cout << "Sum of col [" << b << "]:- " << sum;
        cout << endl;
    }
}

int largestRowSum(int arr[][3], int i, int j)
{
    int max = INT16_MIN;
    int rowIndex = -1;
    for (int a = 0; a < i; a++)
    {
        int sum = 0;
        for (int b = 0; b < j; b++)
        {
            sum = sum + arr[a][b];
        }
        if (sum > max)
        {
            max = sum;
            rowIndex = a;
        }
    }
        cout << "Maximum sum is " << max << endl;
    return rowIndex;
}

int main()
{
    // int i, j;
    // cout << "Enter the size of 2D-array:-" << endl;
    // cout << "No of rows :- ";
    // cin >> i;
    // cout << "No of cols :- ";
    // cin >> j;
    int arr[3][3] = {0};
    // column wise input
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            cout << "Enter the a[" << a << "][" << b << "] :-";
            cin >> arr[a][b];
        }
    }

    // row wise input

    // for (int b = 0; b < j; b++)
    // {
    //     for (int a = 0; a < i; a++)
    //     {
    //         cout << "Enter the a[" << a << "][" << b << "] :-";
    //         cin >> arr[a][b];
    //     }
    // }

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            cout << arr[a][b] << " ";
        }
        cout << endl;
    }

    printSumRowWise(arr, 3, 3);
    printSumColWise(arr, 3, 3);
    int num = largestRowSum(arr,3,3);
    cout << "The index of the row having largest sum is :- " << num << endl;
    return 0;
}