#include<bits/stdc++.h>
using namespace std;

int N = 10000, top = -1;
int a[10000];

void insert(int x) {
    if (top == N - 1) {
        cout << "Stack Overflow\n";
    } else {
        a[++top] = x;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
    } else {
        top--;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Current stack: ";
        for (int i = 0; i <= top; i++) {
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

        system("clear");
    }
    return 0;
}