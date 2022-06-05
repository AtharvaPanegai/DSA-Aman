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

node *reverseKNodes(node *&head, int k)
{
    node *currPtr = head;
    node *prevPtr = NULL;
    node *nextPtr;
    int count = 0;
    while (currPtr != NULL && count < k)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
        count++;
    }
    if (nextPtr != NULL)
    {
        head->next = reverseKNodes(nextPtr, k);
    }

    return prevPtr;
}

int main()
{

    return 0;
}