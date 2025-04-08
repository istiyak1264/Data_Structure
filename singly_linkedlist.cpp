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

void insertAtArbitaryPosition(Node* &head, int value, int pos)
{
    if(pos == 0)
    {
        insertAtHead(head, value);
        return;
    }
    Node* new_node = new Node(value);
    Node* temp = head;
    int current_pos = 0;
    while(current_pos != pos-1)
    {
        temp = temp->next;
        current_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void updateAtArbitaryPostion(Node* &head, int value, int pos)
{
    Node* temp = head;
    int current_pos = 0;
    while(current_pos <= pos)
    {
        if(current_pos == pos)
        {
            temp->value = value;
        }
        current_pos++;
    }
}

void deleteAtHead(Node* &head)
{
    head = head->next;
}

void deleteAtTail(Node* &head)
{
    Node* temp1 = head;
    Node* temp2 = 0;
    while(temp1->next != NULL)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    delete temp1;
    if(temp2)temp2->next = NULL;
    else head = NULL;

}

void deleteAtArbitaryPosition(Node* &head, int pos)
{
    if(pos==0)
    {
        deleteAtHead(head);
        return;
    }
    int current_pos = 0;
    Node* prev = head;
    while(current_pos != pos - 1)
    {
        prev = prev->next;
        current_pos++;
    }
    Node* temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
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
    insertAtTail(head, 4);
    display(head);
    insertAtArbitaryPosition(head, 5, 3);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    updateAtArbitaryPostion(head, 7, 2);
    display(head);
    deleteAtArbitaryPosition(head, 2);
    display(head);
    
    return 0;
}