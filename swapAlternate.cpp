#include <iostream>
using namespace std;
void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
        {
            //swap(arr[i], arr[i + 1]);
            int temp = arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
    
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {1, 2, 3, 4, 5};
    cout << "Given even array is :- ";
    printArray(arr, 6);
    cout << "Even array after swaping :- ";
    swapAlternate(arr, 6);
    printArray(arr, 6);
    cout << endl;
    cout << "Given odd array is :- ";
    printArray(brr, 5);
    cout << "Odd array after swaping :- ";
    swapAlternate(brr, 5);
    printArray(brr, 5);

    cout << endl; 
    return 0;
}