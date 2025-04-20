#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &v, int target)
{
    int low = 0;
    int high = v.size()-1;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(v[mid] == target)
        {
            return mid;
        }
        else if(v[mid] < target)
        {
            low = mid + 1;
        }
        else if(v[mid] > target)
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {2, 3, 11, 9, 17, 5, 13, 1, 7, 4};
    int target = 17;
    int index = binarySearch(v, target);
    cout<< "Index of target: " << index << endl;
    return 0;
}