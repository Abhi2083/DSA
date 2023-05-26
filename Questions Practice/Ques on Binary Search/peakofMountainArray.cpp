#include <iostream>
using namespace std;

int peakofMountainArray(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[5]={3,7,9,3,1};
    int ans = peakofMountainArray(arr, 5);

    cout << "Result is :- " << arr[ans] << endl;

    return 0;
}