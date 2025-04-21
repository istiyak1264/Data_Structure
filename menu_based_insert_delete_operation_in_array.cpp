#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void display(const vector<int>& v)
{
    cout << "Current array: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

void Insert(vector<int>& v)
{
    int element, position;
    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position to insert at (0-based index): ";
    cin >> position;
    if (position >= 0 && position <= v.size())
        v.insert(v.begin() + position, element);
    else
        cout << "Invalid position!" << endl;
}

void Delete(vector<int>& v)
{
    int position;
    cout << "Enter position to delete from (0-based index): ";
    cin >> position;
    if (position >= 0 && position < v.size())
        v.erase(v.begin() + position);
    else
        cout << "Invalid position!" << endl;
}

int main()
{
    while (true)
    {
        int n, input;
        cout << "Enter the size of the array: ";
        cin >> n;

        vector<int> v;
        cout << "Enter the elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            v.push_back(input);
        }

        while (true)
        {
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif

            display(v);
            cout << "\nMenu:\n";
            cout << "1. Insert\n";
            cout << "2. Delete\n";
            cout << "3. Exit\n";
            cout << "Enter choice: ";
            int choice;
            cin >> choice;

            if (choice == 1)
                Insert(v);
            else if (choice == 2)
                Delete(v);
            else if (choice == 3)
                return 0;
            else
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
