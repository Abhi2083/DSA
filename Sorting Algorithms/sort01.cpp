#include <iostream>
using namespace std;
void sort(int arr[], int n)
{

    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int arr[9] = {1, 0, 0, 0, 0, 0, 0, 0, 0};
    cout<<"Given Array is:- ";
    printArray(arr,9);
    cout << endl;
    sort(arr, 9);
    cout<<"Sorted Array is:- ";
    printArray(arr,9);
    

    return 0;
}