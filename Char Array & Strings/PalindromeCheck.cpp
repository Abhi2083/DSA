#include <iostream>
using namespace std;
bool checkPalindrome(char a[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (a[start] != a[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter the size:- " ;
    cin >> n;
    char ch[n];
    cout << "Enter the string to be checked for the palindrome:- ";
    cin >> ch;
    
    cout << "The entered string is a palindrome string if output is 1..... output:- " << checkPalindrome(ch, n);
    
    return 0;
}