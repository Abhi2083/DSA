//not an optimised solution we can have a better approach for this
//two pointer approach 
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 6, 5, 9};
    int brr[4] = {3, 4, 5, 9};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr[i]<brr[j]){
                break;
            }
            if (arr[i] == brr[j])
            {
                cout << arr[i] <<" ";
                brr[j]=-33;//-33(and random no which doesnot come in the array) brcause we are changing the value of that element so that further mapping cannot be done. 
                break;
            }
        }
    }
    cout << endl;
    return 0;
}