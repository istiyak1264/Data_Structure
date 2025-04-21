#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    srand(time(0));

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10; // elements will be between 0 to 9
    }

    cout << "Generated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the target element: ";
    cin >> target;

    vector<int> positions;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            positions.push_back(i);
        }
    }

    cout << "Occurrences: " << positions.size() << endl;
    cout << "Positions: ";
    for (int pos : positions)
    {
        cout << pos << " ";
    }     
    cout << endl;

    return 0;
}
