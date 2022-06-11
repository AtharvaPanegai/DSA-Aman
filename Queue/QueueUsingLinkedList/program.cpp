#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class myQueue
{
public:
    node *front;
    node *back;

    myQueue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        node *newNode = new node(x);

        // if it is first node then put it in the fron and back
        if (front == NULL)
        {
            front = newNode;
            back = newNode;
            return;
        }
        // if it is not first node
        back->next = newNode;
        back = newNode;
    }

    void pop()
    {
        if (!front)
        {
            return;
        }
        node *nodeToBeDeleted = front;
        front++;
        delete nodeToBeDeleted;
    }

    int peek()
    {
        if (!front)
        {
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        return (front);
    }
};

int main()
{
    return 0;
}