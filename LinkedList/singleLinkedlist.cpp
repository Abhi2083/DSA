#include <iostream>
using namespace std;

class LinkedlistNode
{
public:
    int data;
    LinkedlistNode *next;

    LinkedlistNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(LinkedlistNode *&head, int d)
{
    LinkedlistNode *temp = new LinkedlistNode(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(LinkedlistNode *&tail, int d)
{
    LinkedlistNode *temp = new LinkedlistNode(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(LinkedlistNode *&head, LinkedlistNode *&tail, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    LinkedlistNode *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    LinkedlistNode *nodeToInsert = new LinkedlistNode(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteNode(LinkedlistNode *&head, int position)
{
    // Check if the given position is valid
    int listLength = 0;
    LinkedlistNode* temp = head;
    while (temp != NULL)
    {
        listLength++;
        temp = temp->next;
    }

    if (position < 0 || position > listLength)
    {
        cout << "Invalid position. Please provide a position within the range of the linked list." << endl;
        return;
    }
    // deleting at 1st pos
    if (position == 0)
    {
        LinkedlistNode *temp = head;
        head = head->next;
        delete temp;
    }
    else
    { // deleting at any pos
        LinkedlistNode* curr = head;
        LinkedlistNode* prev = NULL;
        int cnt = 1;
        while(cnt <= position){
            prev = curr;
            curr = curr ->next;
            cnt++;
        }

        prev->next= curr->next;
        // delete curr;

    }
}
void print(LinkedlistNode *&head)
{
    LinkedlistNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    LinkedlistNode *node1 = new LinkedlistNode(50);
    // head pointing to node1
    LinkedlistNode *head = node1;
    LinkedlistNode *tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 13);
    print(head);

    insertAtHead(head, 14);
    print(head);

    insertAtHead(head, 15);
    print(head);

    // insertAtTail(tail, 60);
    // print(head);

    // insertAtTail(tail, 70);
    // print(head);

    // insertAtTail(tail, 80);
    // print(head);

    // insertAtTail(tail, 90);
    // print(head);
    // print(tail);

    insertAtPosition(head, tail, 6, 7);
    print(head);

    deleteNode(head,4);
    print(head); 
}