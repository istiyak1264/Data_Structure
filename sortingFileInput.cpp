#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void bubbleSort(vector<ll> &a)
{
    ll n = a.size();
    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

void selectionSort(vector<ll> &a)
{
    ll n = a.size();
    for (ll i = 0; i < n - 1; i++)
    {
        ll minIdx = i;
        for (ll j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIdx])
                minIdx = j;
        }
        swap(a[i], a[minIdx]);
    }
}

void insertionSort(vector<ll> &a)
{
    ll n = a.size();
    for (ll i = 1; i < n; i++)
    {
        ll key = a[i], j = i - 1;
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
    vector<ll> a = {5, 3, 8, 6, 2, 7, 4, 1};

    bubbleSort(a);
    for (ll x : a)
        cout << x << " ";
    cout << endl;

    a = {5, 3, 8, 6, 2, 7, 4, 1};
    selectionSort(a);
    for (ll x : a)
        cout << x << " ";
    cout << endl;

    a = {5, 3, 8, 6, 2, 7, 4, 1};
    insertionSort(a);
    for (ll x : a)
        cout << x << " ";
    cout << endl;

    return 0;
}
