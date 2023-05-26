// Given an array of integer numbers where arr[i] represents the number of pages in the ith book. There are m number of students and the task is to allocate all the books to their students. Allocate books in such a way that:- 
// 1. Each students get at least one book.
// 2. Each book should be allocated to the students.
// 3. Book alocation should be in contigious manner.

// We have to allocate the book to m students such that the minimum number of pages assigned to a student is minimum.

#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int bookAllocation(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[4] = {10, 20, 30, 40};
    printArray(arr,4);
    cout << endl;
    cout <<"Result:- "<< bookAllocation(arr, 4, 3);
    return 0;
}
