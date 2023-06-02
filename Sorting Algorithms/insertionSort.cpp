#include <iostream>
using namespace std;

void insertionSort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = array[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (array[j] > temp)
            {
                array[j + 1] = array[j];
            }
            else
            {
                break;
            }
        }
        array[j + 1] = temp;
    }
}

void printArray(int array[], int n)
{
    int i = 0;
    cout << "Array is:- ";
    while (i < n)
    {
        cout << array[i] << " ";
        i++;
    }
}

int main()
{
    int array[7] = {10, 1, 7, 4, 8, 2, 11};
    printArray(array, 7);
    cout << endl;
    insertionSort(array, 7);
    printArray(array, 7);
    return 0;
}

// Space complixity = O(1) = constant space complixity.
// Time complixity = O(n^2)
//  best case =  already sorted = O(n)
//  worst case = reversed = O(n^2)