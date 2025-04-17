#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void deleteAtHead(Node *&head)
{
    head = head->next;
}

void deleteAtTail(Node *&head)
{
    Node *temp1 = head;
    Node *temp2 = NULL;
    while (temp1->next != NULL)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    delete temp1;
    if (temp2)
        temp2->next = NULL;
    else
        head = NULL;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node* head = NULL;
    while (true)
    {
        int choice;
        cout << "1.Insert at Head" << endl;
        cout << "2.Insert at Tail" << endl;
        cout << "3.Display" << endl;
        cout << "4.Delete at Head" << endl;
        cout << "5.Delete at Tail" << endl;
        cout << "6.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            int element;
            cout<< "Insert an element: ";
            cin>> element;
            insertAtHead(head, element);
        }
        
        else if(choice == 2)
        {
            int element;
            cout<< "Insert an element: ";
            cin>> element;
            insertAtTail(head, element);
        }

        else if(choice == 3)
        {
            display(head);
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }

        else if(choice == 4)
        {
            deleteAtHead(head);
        }
            
        else if(choice == 5)
        {
            deleteAtTail(head);
        }
           
        else if(choice == 6)
        {
            break;
        }

        else
        {
            cout<< "Invalid choice. Please try again." << endl;
        }

        system("clear");
    }
    return 0;
}