#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert(node *&head, node *&tail, int pos, int data)
{
    node *temp = head;
    if (pos == 1)
    {
        node *temp1 = new node(data);
        temp1->next = head;
        head = temp1;
        if (tail == nullptr)
        {
            tail = temp1;
        }
    }
    else
    {
        int cnt = 1;
        while (temp != nullptr && cnt < pos - 1)
        {
            temp = temp->next;
            cnt++;
        }

        if (temp == nullptr)
        {
            cout << "Position out of range" << endl;
            return;
        }
        if (temp->next == nullptr)
        {
            node *temp1 = new node(data);
            tail->next = temp1;
            temp1->next = head; 
            tail = temp1; 
            return;
        }
        else
        {
            node *nodeToInsert = new node(data);
            nodeToInsert->next = temp->next;
            temp->next = nodeToInsert;
        }
    }
}


void print(node *&tail)
{
    node *temp = tail;
    if (tail == nullptr)
    {
        return;
    }
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

int main()
{
    node *node1 = new node(3);
    node *head = node1;
    node *tail = node1;

    insert(head, tail, 1, 2);
    insert(head, tail, 3, 4);
    insert(head, tail, 4, 5);
    print(head);
}
