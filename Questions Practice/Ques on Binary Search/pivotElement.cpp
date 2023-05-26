#include <iostream>
using namespace std;

int pivotElement(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0]) //agar mid element bada h to start ko mid ke bad la do fir aage badho
        {
            start = mid + 1;
        }
        else // agar mid element bada nhi h to end ko mid ke pas le jao 
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int arr[5] = {19,10,17,1,3};
    cout << "Pivot element is :- " << arr[pivotElement(arr,5)] << endl;
    cout << endl;
    return 0;
}