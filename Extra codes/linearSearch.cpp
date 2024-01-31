#include <iostream>
using namespace std;

bool search(int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int array[10] = {5, 7, 8, 2, 7, 4, 8, -9, 4, -10};

    cout << "Enter the element to search for:- " << endl;
    int key;
    cin >> key;
    bool found = search(array, 10, key);

    if (found)
    {
        cout << "Key is present." << endl;
    }
    else
    {
        cout << "Key is absent." << endl;
    }

    cout << endl;
    return 0;
}