#include <iostream>
using namespace std;

// Pattern To be printed:-
// A B C 
// B C D
// C D E

int main()
{
    int n;
    cout << " Enter the value of n:- ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while(j<=n)
        {
            char ch = 'A'+i+j-2;
            cout << ch << " ";
            j=j+1;
        }
        cout << endl ;
        i=i+1;
    }
    
    return 0;
}