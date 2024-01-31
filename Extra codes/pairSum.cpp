// Given an integer array of size n and an integer S(ex- 4) we have to return the list of the pair of elements such that each sum of elements of each pair equal to S(ex- (3,1).....etc)
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
    cout << endl
         << endl;
    int a;
    cout << "Enter the integer whose pair is needed to be searched:- ";
    cin >> a;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == a)
            {
                cout << " ( " << arr[i] << " , " << arr[j] << " ) ";
            }
        }
    }

    return 0;
}