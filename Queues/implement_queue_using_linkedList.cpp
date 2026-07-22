#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
private:
    Node *front, *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }

    // Enqueue
    void enqueue(int x)
    {
        Node *newNode = new Node(x);

        if (front == NULL)
        {
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    // Dequeue
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow!" << endl;
            return;
        }

        Node *temp = front;
        front = front->next;
        delete temp;

        if (front == NULL)
            rear = NULL;
    }

    // Front Element
    void peek()
    {
        if (front == NULL)
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Front Element: " << front->data << endl;
    }

    // Check Empty
    bool isEmpty()
    {
        return front == NULL;
    }

    // Display
    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        Node *temp = front;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.peek();

    q.dequeue();

    q.display();

    cout << "Is Empty: " << q.isEmpty() << endl;

    return 0;
}