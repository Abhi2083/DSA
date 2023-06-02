// Given an integer array which returns true if the no occourance of each value in the array is unique or false otherwise.
#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {2, 8, 4, 2, 8, 2, 2, 8, 4};
    int count = 0, n = 9;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==arr[i+1]){
            count++;
        }
        else{
            count++;
        }
    }
    cout << count;
    cout << endl;
    return 0;
}