#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
int getMax(int arr[], int size)
{
    int max = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int size)
{
    int min = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cin >> size;
    int arr[5];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Max value is :- " << getMax(arr, size) << endl;
    cout << "Min value is :- " << getMin(arr, size) << endl;
    cout << endl;
    return 0;
}