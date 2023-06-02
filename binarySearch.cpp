#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // going to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 14};
    int odd[5] = {1, 3, 5, 7, 9};

    int evenindex = binarysearch(even, 6, 14);
    int oddindex = binarysearch(odd, 5, 8);

    cout << "Even Index of is :- " << evenindex << endl;
    cout << "Odd Index is :- " << oddindex << endl;
    cout << endl;
    return 0;
}