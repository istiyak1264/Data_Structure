#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &v, int target)
{
    int low = 0;
    int high = v.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
        {
            return mid;
        }
        else if (v[mid] < target)
        {
            low = mid + 1;
        }
        else if (v[mid] > target)
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {2, 13, 15, 17, 19, 55, 70, 81, 87, 94};
    int target = 19;
    int index = binarySearch(v, target);
    cout << "Index of target: " << index << endl;
    return 0;
}