#include <iostream>
using namespace std;
int pivotElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            mid = end;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int key)
{
    int s = start;
    int e = end;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int findPos(int arr[], int size, int key)
{
    int pivot = pivotElement(arr, 6);
    if (arr[pivot] <= key && key <= arr[size-1]){
        return binarySearch(arr,pivot,size-1,key);
    }else{
        return binarySearch(arr,0,pivot-1,key);
    }
}
int main()
{
    int arr[6] = {5, 8, 9, 1, 3, 4};
    cout << "Position of 3 is " << findPos(arr,6,3);
    cout << endl;
    return 0;
}