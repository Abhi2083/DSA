#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int da)
    {
        this->data = da;
        this->next = NULL;
    }
};

void insertAtBegining(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail -> next= temp;
    tail = temp;
}

void del (Node *& head, int pos){
    
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtBegining(head, 2);
    print(head);
    insertAtBegining(head, 3);
    print(head);
    insertAtBegining(head, 4);
    print(head);
    insertAtEnd(tail, 0);
    print(tail);
    insertAtBegining(head, 5);
    print(head);
    insertAtBegining(head, 6);
    print(head);
    
}