#include <iostream>
using namespace std;
void reverse(int array[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << endl
         << "Given array is :- " << endl;
    int arr[5] = {3, 7, 4, 9, 2};
    int brr[6] = {3, 7, 4, 9, 2, 0};
    printArray(arr, 5);
    printArray(brr, 6);

    reverse(arr, 5);
    reverse(brr, 6);

    cout << endl
         << "Reversed array is :- " << endl;
    printArray(arr, 5);
    printArray(brr, 6);

    cout << endl;
    return 0;
}