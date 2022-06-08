#include "bits/stdc++.h"
using namespace std;

#define n 100

class Stack
{
    int *arr;
    int top;

public:
    // allocating memory to the stack
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow"
                 << "\n";
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty"
                 << "\n";
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "Stack is empty"
                 << "\n";
            return;
        }

        return arr[top];
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    return 0;
}