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

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(1); 
    print(node1);
    insertAtBegining(node1,2);
    print(node1);
    insertAtBegining(node1,3);
    print(node1);
    insertAtBegining(node1,4);
    print(node1);
    insertAtBegining(node1,5);
    print(node1);
    insertAtBegining(node1,6);
}