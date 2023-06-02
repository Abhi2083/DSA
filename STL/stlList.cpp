#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(2);
    l.push_front(1);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);

    for (int i : l)
    {
        cout << " " << i;
    }
    cout << endl;

    cout << l.size();
    cout << endl;
    
    l.pop_back();
    l.pop_front();
    for (int i : l)
    {
        cout << " " << i;
    }
    cout << endl;
    cout << l.size();
    cout << endl;

    // Eraseing element
    l.erase(l.begin());
    for (int i : l)
    {
        cout << " " << i;
    }

    return 0;
}