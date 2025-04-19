#include<iostream>
using namespace std;

class Queue
{
private:
    int* arr;
    int size;
    int front;
    int back;
public:
    Queue(int capacity)
    {
        size = capacity;
        arr = new int[size];
        front = 0;
        back = -1;
    }
    void pushElement(int data)
    {
        if((back-front) < size-1)
        {
            back++;
            arr[back] = data;
        }
        else
        {
            cout<< "Queue is full." << endl;
        }
    }
    void popElement()
    {
        if((back-front) > 0)
        {
            front++;
        }
        else
        {
            cout<< "Queue is Empty." << endl;
        }
    }
    void display()
    {
        for(int i = front; i<= back; i++)
        {
            cout<< arr[i] << " ";
        }
        cout<<"\n";
    }
};

int main()
{
    Queue q(5);
    while (true)
    {
        int choice;
        cout << "1.Push Element" << endl;
        cout << "2.Pop Element" << endl;
        cout << "3.Display Stack" << endl;
        cout << "4.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int element;
            cout << "Enter the element you want to push: ";
            cin >> element;
            q.pushElement(element);
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }
        else if (choice == 2)
        {
            q.popElement();
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }
        else if (choice == 3)
        {
            q.display();
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid choice. Please try again!" << endl;
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }

#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif

    }
    return 0;
}