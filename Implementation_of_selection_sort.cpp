#include <iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIdx])
            {
                minIdx = j;
            }
        }
        swap(a[i], a[minIdx]);
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
    selectionSort(a, n);

    cout << "Sorted array  : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
