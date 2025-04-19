#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int *arr;
    int top_index;

public:
    Stack(int capacity)
    {
        size = capacity;
        arr = new int[size];
        top_index = -1;
    }
    void pushElement(int data)
    {
        if (top_index < size - 1)
        {
            top_index++;
            arr[top_index] = data;
        }
        else
        {
            cout << "Stack Overflow." << endl;
            return;
        }
    }
    void popElement()
    {
        if (top_index >= 0)
        {
            top_index--;
        }
        else
        {
            cout << "Stack Underflow." << endl;
            return;
        }
    }
    void display()
    {
        for (int i = 0; i <= top_index; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Stack st(5);
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
            st.pushElement(element);
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }
        else if (choice == 2)
        {
            st.popElement();
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }
        else if (choice == 3)
        {
            st.display();
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
        }

#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
    }
    return 0;
}