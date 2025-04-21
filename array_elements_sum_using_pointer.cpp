#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int *ptr = arr;
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += *(ptr + i);

    cout << "Sum of elements: " << sum << endl;

    return 0;
}
