#include <iostream>
using namespace std;
void printArray(int arrr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arrr[i] << " ";
    }
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main()
{
    int arrr[5] = {6,2,8,4,10};
    cout << "Given array is :- ";
    printArray(arrr, 5);
    cout << endl;
    cout << "Sorted array is:- ";
    selectionSort(arrr, 5);
    printArray(arrr, 5);
    return 0;
}