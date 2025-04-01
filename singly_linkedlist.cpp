#include<iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;

    Node(int data)
    {
        value = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int value)
{
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int value)
{
    Node* new_node = new Node(value);
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp->value << "->";
        temp = temp->next;
    }
    cout<< "NULL" << endl;
}

int main()
{
    Node* head = NULL;
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 1);
    display(head);
    insertAtTail(head, 3);
    display(head);
    return 0;
}