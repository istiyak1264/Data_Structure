#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
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
    insertionSort(a, n);

    cout << "Sorted array  : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
