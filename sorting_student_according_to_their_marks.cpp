#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
public:
    string name;
    int roll, marks;
    void input()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore();
    }
};

int main()
{
    vector<Student> v;
    while (true)
    {
        Student s;
        s.input();
        v.push_back(s);
        cout << "Press Enter to continue or 'q' to quit: ";
        char c = getchar();
        if (c == 'q')
            break;
    }
    sort(v.begin(), v.end(), [](Student a, Student b)
         { return a.marks > b.marks; });
    for (auto s : v)
        cout << s.name << " " << s.roll << " " << s.marks << endl;
}
