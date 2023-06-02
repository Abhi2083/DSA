#include <iostream>
using namespace std;
// Q1
/* Printing pattern-
      *
     **
    ***
   ****
  *****
 ******

 */

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

// Q2
/* Printing pattern- 

******
*****
****
***
**
*

*/



    int x;
    cin >> x;

    int row = 1;
    while (row <= x)
    {
        int col = 1;
        while (col <= x-row+1)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}