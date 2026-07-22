// Implementation of stack using singly linked list
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

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    // Push
    void push(int x)
    {
        Node *newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    // Pop
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow!" << endl;
            return;
        }

        Node *temp = top;
        top = top->next;
        delete temp;
    }

    // Peek
    void peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty!" << endl;
            return;
        }

        cout << "Top Element: " << top->data << endl;
    }

    // Check Empty
    bool isEmpty()
    {
        return top == NULL;
    }

    // Display
    void display()
    {
        if (top == NULL)
        {
            cout << "Stack is empty!" << endl;
            return;
        }

        Node *temp = top;

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

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    cout << "Is Empty: " << s.isEmpty() << endl;

    return 0;
}

/*
top is kept private to achieve encapsulation.
It prevents external code from modifying the stack's internal pointer directly, ensuring that the stack can only be manipulated through push(), pop(), and other member functions.
*/