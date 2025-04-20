#include <iostream>
#include <vector>
using namespace std;

int RecursiveBinarySearch(vector<int> &v, int target, int low, int high)
{
    // base case
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (v[mid] == target)
        return mid;
    if (v[mid] < target)
        return RecursiveBinarySearch(v, target, mid + 1, high);
    else
        return RecursiveBinarySearch(v, target, low, mid - 1);
}

int main()
{
    int size, element, target;
    cout << "Enter the size of the vector: ";
    cin >> size;
    
    cout<< "Enter the elements of vector: ";
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v.push_back(element);
    }

    cout<< "Enter the target: ";
    cin>> target;

    cout<< "Index of target: " << RecursiveBinarySearch(v, target, 0, size - 1);
    return 0;
}