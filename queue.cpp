#include<bits/stdc++.h>
using namespace std;

int N = 10000,start=0, End= -1;
int a[10000];

void insert(int x) {
    if (End == N - 1) {
        cout << "Stack Overflow\n";
    } else {
        a[++End] = x;
    }
}

void pop() {
    if (End <start) {
        cout << "Stack Underflow\n";
    } else {
        start++;
    }
}

void display() {
    if (End <start) {
        cout << "queue is empty\n";
    } else {
        cout << "Current queue: ";
        for (int i = start; i <= End; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    while (true) {
        display();
        int ch;
        cout << "1. Insert element\n";
        cout << "2. Pop element\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        if (ch == 1) {
            int x;
            cout << "Enter element to insert: ";
            cin >> x;
            insert(x);
        } else if (ch == 2) {
            pop();
        } else if (ch == 3) {
            break;
        } else {
            cout << "Invalid choice, please try again.\n";
        }

        system("cls");
    }
    return 0;
}