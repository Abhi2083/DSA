// we have been given a sorted array of n elements and you also have been given an integer K. we have to find the first and last occourance of k in the array and print the index.(if not present show -1)
#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int startsort(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int endsort(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[17] = {0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6};
    cout << "The Given Array is:- ";
    printArray(arr, 17);
    cout << endl;
    int k;
    int index = startsort(arr, 17, 5);
    int jndex = endsort(arr, 17, 5);
    cout << "First occourance of 5 is at Index:- " << index << endl;
    cout << "Last occourance of 5 is at Index:- " << jndex << endl;
    cout << "Total no of occourance:- " << (jndex - index) + 1 <<endl;
    return 0;
}