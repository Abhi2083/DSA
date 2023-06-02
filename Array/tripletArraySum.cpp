#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Given array is :- ";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int a;
    cout << "Enter the integer whose triplet is needed to be searched:- ";
    cin >> a;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                if (arr[i] + arr[j] + arr[k] == a)
                {
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")";
                }
            }
        }
    }

    cout << endl;
    return 0;
}