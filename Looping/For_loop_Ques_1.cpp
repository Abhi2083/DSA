#include<iostream>
using namespace std;
 int main()
{
    int n;
    cout << "Enter the value of n:- ";
    cin >> n;

    int sum = 0;

    for(int i = 1; i<=n; i++){
        // sum = sum + i ;
        sum += i; // this means same as upper one
    }
    cout << sum <<endl;
    cout<<endl;
    return 0;
}