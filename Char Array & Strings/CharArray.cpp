#include <iostream>
using namespace std;

// Length of an Char Array
int length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// Reverse of a Char Array
void reverse(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}
int main()
{
    // Taking Input in the Char Array
    char name[10];
    cout << "Enter your name:- " << endl;
    cin >> name;
    name[3] = '\0';


    // geting a line as input in the character array
    char s[40];
    cin.getline(s, 50);
    cout << s;

    // Output of the Char Array
    cout << "Your name is " << name[i] << endl;

    cout << endl;
    string str = "Abhishek";
    str[3] = '\0';
    cout << "Your name is " << str << endl;

    int len = length(name);
    cout << "No of char entered is :- " << len << endl;
    reverse(name, len);
    cout << "Reversed char is :- " << name;
    return 0;
}