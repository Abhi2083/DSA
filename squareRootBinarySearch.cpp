// Given an non negative integer x, compute and return the square root of x.
#include <iostream>
using namespace std;
long long int Squareroot(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
    long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
            //return ans;
        }
        else if (square > n)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    long long int k;
    cout << "____**--Square root calculator--**____" << endl;
    cout << "Enter the number :- ";
    cin >> k;
    cout <<"The Square root is ";
    cout << Squareroot(k)<< endl;
    cout << "____**--Square root calculator ends--**____" << endl;
    return 0;
}