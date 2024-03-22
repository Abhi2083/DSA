#include <iostream>
using namespace std;

class stack
{
public:
    int data;
    stack *next = nullptr;

    stack(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
stack *top = 0;
void push(int data)
{
    stack *node = new stack(data);
    node->next = top;
    top = node;
}

void pop()
{
    stack *temp = top;
    if (top == 0)
    {
        cout << "Empty stack.";
    }
    else
    {
        top = top->next;
        free(temp);
    }
}

void peek()
{
    if (top == 0)
    {
        cout << "\nStack is empty\n";
    }
    else
    {
        cout << "\nTop element is : " << top->data << "\n";
    }
};
int main()
{
    push(1);
    push(2);
    push(4);
    push(5);
    push(6);
    push(7);
    peek();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    peek();
    return 0;
}
