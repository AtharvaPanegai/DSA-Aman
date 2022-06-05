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

node *reverseLL(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newHead = reverseLL(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

int main()
{

    return 0;
}