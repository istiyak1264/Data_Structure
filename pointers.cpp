#include<iostream>
using namespace std;

int main()
{
    int a = 110;
    int* ptr = &a;

    int** ptr2 = &ptr;

    int* ptr3 = NULL;

    cout << ptr << endl;
    cout << *ptr << endl;

    cout << *ptr2 << endl;
    cout << **ptr2 << endl;
    cout << ptr3 << endl;
    return 0;
}