// you have been given an integer array of size n where n = 2m + 1. m numbers are present twice and one  number is present only once.we have to find that unique number.
#include <iostream>
using namespace std;
int search(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1};

    cout << endl
         << search(arr, 9);

    cout << endl;
    return 0;
}