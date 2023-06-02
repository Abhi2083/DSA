#include <iostream>
using namespace std;
/* Pattern to be printed:- 
    F 
    E F
    D E F
    C D E F
    B C D E F
    A B C D E F
 */
int main()
{
    int n;
    cout << "Enter the value of n- ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A'+n-i;
        while (j <= i)
        {
            
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;

        }
        cout << endl;
        i = i + 1;
    
    }
    return 0;
}