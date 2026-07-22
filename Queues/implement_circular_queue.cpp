#include <iostream>
using namespace std;

class CircularQueue
{
private:
    int arr[10];
    int front, rear;
    int n;

public:
    CircularQueue()
    {
        n = 10;
        front = -1;
        rear = -1;
    }

    // Check if queue is empty
    bool isEmpty()
    {
        return front == -1;
    }

    // Check if queue is full
    bool isFull()
    {
        return (rear + 1) % n == front;
    }

    // Enqueue
    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue Overflow!" << endl;
            return;
        }

        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % n;
        }

        arr[rear] = x;
    }

    // Dequeue
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow!" << endl;
            return;
        }

        cout << "Deleted: " << arr[front] << endl;

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % n;
        }
    }

    // Front element
    void peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Front Element: " << arr[front] << endl;
    }

    // Display queue
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Queue: ";

        int i = front;

        while (true)
        {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % n;
        }

        cout << endl;
    }

    // Size
    void size()
    {
        if (isEmpty())
        {
            cout << "Size: 0" << endl;
            return;
        }

        int sz = (rear - front + n) % n + 1;
        cout << "Size: " << sz << endl;
    }
};

int main()
{

    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    q.enqueue(100);
    q.enqueue(110);
    q.enqueue(120);

    q.display();

    q.peek();

    q.size();

    return 0;
}