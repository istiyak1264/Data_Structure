#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ArrayOperations
{
private:
    vector<int> arr;

public:
    void inputSortedData()
    {
        int input;
        cout << "Enter elements of array (-1 to stop): ";
        while (cin >> input && input != -1)
            arr.push_back(input);

        sort(arr.begin(), arr.end());
    }

    void insertElement()
    {
        int pos, val;
        cout << "Enter position to insert: ";
        cin >> pos;
        cout << "Enter value to insert: ";
        cin >> val;
        if (pos >= 0 && pos <= arr.size())
            arr.insert(arr.begin() + pos, val);
        else
            cout << "Invalid position.\n";
    }

    void deleteElement()
    {
        int pos;
        cout << "Enter position to delete: ";
        cin >> pos;
        if (pos >= 0 && pos < arr.size())
            arr.erase(arr.begin() + pos);
        else
            cout << "Invalid position.\n";
    }

    void displayArray()
    {
        cout << "Current array: ";
        for (int i : arr)
            cout << i << " ";
        cout << endl;
    }
};

int main()
{
    ArrayOperations AO;
    AO.inputSortedData();

    while (true)
    {
        int choice;
        cout << "\nMenu:\n1.Insert\n2.Delete\n3.Exit\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            AO.insertElement();
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }
        else if (choice == 2)
        {
            AO.deleteElement();
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }
        else if (choice == 3)
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

        system("clear");
        AO.displayArray();
    }

    return 0;
}
