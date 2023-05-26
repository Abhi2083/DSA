#include <iostream>
using namespace std;
bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
        return -1;
    }
}
int main()
{
    cout << "Enter the size of array:- ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search :- ";
    int key;
    cin >> key;
    // --------Searching for the required element-------
    int found = search(arr, n, key);
    if (found)
    {
        cout << "Element found at index " ;
    }
    else
    {
        cout << "Not found.";
    }
    cout << endl;
    return 0;
}