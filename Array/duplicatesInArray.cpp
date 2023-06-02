//Find the duplicate element in the given array
#include <iostream>
using namespace std;
int duplicate(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans = ans^i;
    }
    return ans;
}
int main()
{
    int arr[4]={0};
    for (int i = 0; i < 4; i++)
    {
        cout << "arr[" << i <<"] = "; 
        cin >> arr[i];
    }
    cout << "Given array is :- ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    cout << "The duplicate element in the given array is :- ";
    cout << duplicate(arr, 4);
    return 0;
}