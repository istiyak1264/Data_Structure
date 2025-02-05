#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int year;
        cin >> year;
        if (year % 400 == 0)
        {
            cout << "Leap year" << endl;
            break;
        }
        if (year % 100 == 0)
        {
            cout << "Not Leap year" << endl;
            break;
        }
        if (year % 4 == 0)
        {
            cout << "Leap year" << endl;
            break;
        }       
        else
            cout << "Not a leap year" << endl;
    }
}