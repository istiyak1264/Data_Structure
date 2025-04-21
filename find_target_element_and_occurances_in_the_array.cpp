#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
        
    cout<<"Enter the target element: ";
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
