#include <iostream>
using namespace std;

int firstOccourance(int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = start + (end - start) / 2;
    int answer = -1;
    while (start <= end)
    {
        if(arr[mid]==key){
            answer = mid;
            end = mid -1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start) / 2;
    }
    return answer;
}

int lastOccourance(int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;
    int mid = start + (end - start) / 2;
    int answer = -1;
    while (start <= end)
    {
        if(arr[mid]==key){
            answer = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start) / 2;
    }
    return answer;
}


int main()
{
    int arr[18]={1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4};
    int result1 = firstOccourance(arr,18,2);
    int result2 = lastOccourance(arr,18,2);
    cout << "First occourance of 2 is:- " << result1 << endl;
    cout << "Last occourance of 2 is:- " << result2 << endl;

    cout << "Total no of occourance :- " << (result2 - result1)+1;
    cout << endl;
    return 0;
}