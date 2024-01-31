#include <iostream>
using namespace std;
int main()
{
    char ch = '1';
    int num = 1;

    cout << endl;
    switch (ch)
    {

    case 1:
        cout << "Frist" << endl;
        //  break;

    case '1': switch (num){
        case 1: cout << "Value of Num is " << num << endl;
        break;
    }
        // cout << "Character one" << endl;
        break;
        
    default:
        cout << "This is default case" << endl;
    
    }

    cout << endl;

    return 0;
}