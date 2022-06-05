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

node *reverseIterator(node *&head)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr = head->next;

    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }

    return prevPtr;
}

int main()
{

    return 0;
}