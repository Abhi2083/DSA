// Stack implementation usig arrays

#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int top;
    int size;
    // constructor
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int d)
    {
        if (top >= size)
        {
            cout << "Stack overflow." << endl;
        }
        else
        {
            top++;
            arr[top] = d;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow." << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack Is empty." << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            // cout << "Yes, Stack is empty." << endl;
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    stack st(5);
    st.push(4);
    st.push(6);
    st.push(7);
    st.push(9);
    st.push(2);
    st.push(3);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    cout << st.isEmpty();
    return 0;
}