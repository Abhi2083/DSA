#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
        if (swapped == false)
        {
            cout << "i";
            // already swapped case
            break;
        }
    }
}
void printArray(int arr[], int n)
{
    cout << "Array is:- ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // int arr[6] = {9, 4, 17, 414, 77, 8};
    int arr[6] = {1,2,3,4,5,6};
    printArray(arr, 6);
    cout << endl;
    BubbleSort(arr, 6);
    cout << "Sorted ";
    printArray(arr, 6);
    return 0;
}