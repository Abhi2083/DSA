#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void sort(int arr[],int n){
    int left = 0;
    int middle =3;
    int right = n-1;
    while(left<right){
        while(arr[left]==0){
            left++;
        }
        while(arr[middle]==1){
            middle++;
        }
        while(arr[right]==2){
            right--;;
        }
        while(left<middle){
            swap(arr[left],arr[middle]);
            left++;
            middle++;
        }
        while(middle<right){
            swap(arr[middle],arr[right]);
            middle++;
            right--;
        }
    }
}
int main()
{
    int arr[9] = {0, 1, 2, 1, 0, 2, 2, 0, 1};
    printArray(arr, 9);
    sort(arr,9);
    cout << endl;
    printArray(arr, 9);
    return 0;
}