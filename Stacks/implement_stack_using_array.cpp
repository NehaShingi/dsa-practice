#include <iostream>
using namespace std;
class stackImplementation
{
    int st[8];
    int arrSize;
    int stSize;
    int top;
    stackImplementation()
    {
        arrSize = 8;
        stSize = 0;
        top = -1;
    }

public:
    void push(int x)
    {
        if (stSize == arrSize)
        {
            cout << "Stack is full" << endl;
            return;
        }

        top++;
        st[top] = x;
        stSize++;
        cout << "Inserted element:" << x << endl;
    }

    void pop()
    {
        int deletedEl;
        if (top == -1)
        {
            cout << "Stack is empty.Nothing to delete" << endl;
            return;
        }
        deletedEl = st[top];
        top--;
        stSize--;
        cout << "Deleted element:" << deletedEl << endl;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return arrSize == stSize;
    }

    void display()
    {
        cout << "Stack: " << endl;
        // Traversing from top to bottom
        for (int i = top; i >= 0; i--)
        {
            cout << st[i] << " ";
        }
        cout << endl;
    }

    int size()
    {
        // If top is -1, it returns (-1+1=0)
        return top + 1;
    }

    int peek()
    {
        if (top == -1)
            cout << "No element is present in stack";
        return -1;
        return st[top];
    }
};

int main()
{

    stackImplementation s;
    cout << "Is stack empty:" << s.isEmpty() << endl;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(4);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(8);
    s.display();
    cout << "Is stack full:" << s.isFull() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.display();
    cout << "Element at top is:" << s.peek() << endl;
}