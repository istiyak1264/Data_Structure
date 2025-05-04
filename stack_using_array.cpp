#include<iostream>
#include<climits>
using namespace std;

class Stacks
{
private:
    int capacity;
    int* arr;
    int top;
public:
    Stacks(int c)
    {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }
    void push(int data)
    {
        if(this->top == this->capacity - 1)
        {
            cout<< "Stack is full." << endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop()
    {
        if(top == -1)
        {
            cout<< "Stack is empty." << endl;
            return INT_MIN;
        }
        int popped = this->arr[this->top];
        this->top--;
        return popped;
    }

    int getTop()
    {
        if(top == -1)
        {
            cout<< "Stack Underflow." << endl;
            return INT_MIN;
        }
        return this->arr[top];
    }

    bool isEmpty()
    {
        return this->top == -1;
    }

    int Size()
    {
        return this->top+1;
    }

    bool isFull()
    {
        return this->top == this->capacity - 1;
    }

    ~Stacks()
    {
        delete[] arr;
    }
};

int main()
{
    Stacks* st = new Stacks(5);
    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);
    st->push(5);
    cout<< st->getTop() << endl;
    st->push(5);
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    

    delete st;

    return 0;
}