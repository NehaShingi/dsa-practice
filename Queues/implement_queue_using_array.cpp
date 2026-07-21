#include <iostream>
using namespace std;

class QueueImplementation
{
public:
    int arr[10];
    int front, rear;
    int n;

    QueueImplementation()
    {
        front = -1;
        rear = -1;
        n = 10;
    }

    void displayOueue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is empty." << endl;
            return;
        }

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void push(int x)
    {
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = x;
        }
        else
        {

            if (rear == n - 1)
            {
                cout << "CAnnot insert.Queue is full";
                return;
            }
            rear++;
            arr[rear] = x;
        }
    }

    void pop()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Cannot pop. Queue is empty." << endl;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }

    void isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            cout << "Queue is not empty yet." << endl;
        }
    }

    void isFull()
    {
        if (rear == n - 1)
        {
            cout << "Queue is full!" << endl;
        }
        else
        {
            cout << "Queue is not full yet!" << endl;
        }
    }

    void findSize()
    {
        if (rear == -1)
        {
            cout << "Size of queue is: 0" << endl;
            return;
        }

        cout << "Size of queue is: " << rear - front + 1 << endl;
    }

    void findFront()
    {
        if (rear == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Front is: " << arr[front] << endl;
    }
};

int main()
{
    QueueImplementation q;
    q.isEmpty();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    q.displayOueue();
    q.findFront();
    q.push(60);
    q.push(70);
    q.pop();
    q.push(80);
    q.push(90);
    q.push(100);
    q.isFull();
    q.findSize();
    q.displayOueue();
}