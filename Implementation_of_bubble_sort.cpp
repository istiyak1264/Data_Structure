#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int a[10] = {10, 5, 2, 9, 1, 6, 3, 8, 7, 4};
    int n = 10;

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    bubbleSort(a, n);

    cout << "Sorted array  : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
