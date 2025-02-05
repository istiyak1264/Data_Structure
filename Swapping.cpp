#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    cout << "Enter the numbers: ";
    cin >> x >> y;
    cout << "Numbers before swapping: " << endl;
    cout << "x--->" << x << endl;
    cout << "y--->" << y << endl;
    swap(&x, &y);
    cout << "Numbers after swapping: " << endl;
    cout << "x--->" << x << endl;
    cout << "y--->" << y << endl;
    return 0;
}
