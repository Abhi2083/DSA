// Given an mountain array (ex:- {0,1,0},{0,1,2,1,0}...etc),we have to find the peak element in the array.
#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int peak(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return arr[start];
}
int main()
{
    int arr[5] = {0, 1, 4, 5, 0};
    cout << "Given array is:- ";
    printArray(arr, 5);
    cout << endl;
    cout << "Peak in the mountain array:- " << peak(arr, 5);
    return 0;
}