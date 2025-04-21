#include <iostream>
using namespace std;

typedef long long ll;

class CircularQueue
{
    int *q, size, front, rear;

public:
    CircularQueue(int n)
    {
        size = n;
        q = new int[n];
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        return (front == (rear + 1) % size);
    }

    bool isEmpty()
    {
        return front == -1;
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is Full\n";
            return;
        }
        if (isEmpty())
            front = 0;
        rear = (rear + 1) % size;
        q[rear] = x;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return;
        }
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return;
        }
        int i = front;
        while (true)
        {
            cout << q[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    ~CircularQueue()
    {
        delete[] q;
    }
};

int main()
{
    CircularQueue cq(5);
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50); // Will show "Queue is Full"
    cq.display();
    cq.dequeue();
    cq.dequeue();
    cq.enqueue(60);
    cq.enqueue(70);
    cq.display();
    return 0;
}
