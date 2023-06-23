#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {23, 122, 41, 67};
    cout << "the address of first memory block is:- " << arr << endl;
    cout << "the address of first memory block is:- " << &arr[0] << endl;
    cout << "testing *arr::- " << *(arr + 2) <<endl;


    int i = 0;
    cout << "line:-" << i[arr];
    return 0;
}