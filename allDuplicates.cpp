//Find all duplicate elements in an integer array (each integer appears once or twice in the array)
#include <iostream>
using namespace std;
int findduplicate(int arr[], int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                cout << i<<" ";
                //cout << arr[i] << " ";
            }
        }
    }
    return count;
}
int main()
{
    int arr[8] = {4, 3, 2, 7, 8, 2, 3, 1};
    cout << "Given array is :- ";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl <<endl;
    cout << "Duplicate enlments are:- " << findduplicate(arr, 8);
    return 0;
}