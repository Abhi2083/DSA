#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    // int mid = (start + end )/2;
    int mid = start + (end - start )/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;

        }
        if(key < arr[mid]){
            end = mid - 1;
        }
        // mid = (start + end )/2;
        mid = start + (end - start )/2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};
    int evenindex = binarySearch(even,6,12);
    int oddindex = binarySearch(odd,5,1);

    cout << "Index of 12 is :- " << evenindex << endl;
    cout << "Index of 1 is :- " << oddindex << endl;
    return 0;
}