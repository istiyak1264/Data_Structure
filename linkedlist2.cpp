#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(node *&head, int data)
{
    node *new_node = new node(data);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void deleteAtHead(node *&head)
{
    if (head == NULL)
        return;
    node *temp = head;
    head = head->next;
    delete temp;
}

void deleteAtTail(node *&head)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout<< "\n" << endl;
}

int main()
{
    node *head = NULL;
    while (true)
    {
        display(head);
        int ch;
        cout << "1. Insert at head" << endl;
        cout << "2. Insert at tail" << endl;
        cout << "3. Delete at head" << endl;
        cout << "4. Delete at tail" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        if (ch == 1)
        {
            int x;
            cout << "Enter element to insert at head: ";
            cin >> x;
            insertAtHead(head, x);
        }
        else if (ch == 2)
        {
            int x;
            cout << "Enter element to insert at tail: ";
            cin >> x;
            insertAtTail(head, x);
        }
        else if (ch == 3)
        {
            deleteAtHead(head);
        }
        else if (ch == 4)
        {
            deleteAtTail(head);
        }
        else if (ch == 5)
        {
            break;
        }
        else
        {
            cout << "Invalid choice, please try again.\n";
        }
        system("clear");
    }
    return 0;
}
