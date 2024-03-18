#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

// traversal
void print(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// finding length of linkedlist
int getlen(node *head)
{
    int cnt = 0;
    node *temp = head;

    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insertAtHead(node *&head, int d)
{
    node *newnode = new node(d);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insertAtTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(node *&head, node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    node *nodetoInsert = new node(data);
    nodetoInsert->next = temp->next;
    temp->next->prev = nodetoInsert;
    temp->next = nodetoInsert;
    nodetoInsert->prev = temp;
}

void deleteNode(node *&head, int pos)
{
    if (pos == 1)
    {
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr ->next;
            cnt++;
        }
        curr ->prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
        
    }
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);
    // cout << getlen(head);

    insertAtHead(head, 11);
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 13);
    print(head);
    insertAtHead(head, 15);
    print(head);
    insertAtHead(head, 16);
    print(head);

    insertAtTail(tail, 9);
    print(head);

    insertAtPosition(head, tail, 3, 14);
    print(head);
    insertAtPosition(head, tail, 9, 8);
    print(head);
    insertAtPosition(head, tail, 10, 6);
    print(head);
    insertAtPosition(head, tail, 10, 7);
    print(head);

    deleteNode(head, 6);
    print(head);
}