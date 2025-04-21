#include <iostream>
using namespace std;

void hanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        cout << from << "--->" << to << endl;
        return;
    }
    hanoi(n - 1, from, aux, to);
    cout << from << "--->" << to << endl;
    hanoi(n - 1, aux, to, from);
}

int main()
{
    int n;
    cout<<"Enter the number of disks: ";
    cin >> n;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
