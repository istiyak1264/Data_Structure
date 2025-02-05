#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int odd = 0, even = 0;
    int i = 1;
    while(n > 0)
    {
        odd += n%10;
        n=n/10;
        even += n%10;
        n=n/10;    
    }
    if(abs(even-odd)%11==0)
    {
        cout << "Divisible by 11." << endl;
    }
    else
    {
        cout << "Not Divisible by 11." << endl;
    } 
    return 0;
}