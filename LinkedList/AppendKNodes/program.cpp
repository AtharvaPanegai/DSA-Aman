// append last k nodes of linkedlist to the start of linkedlist

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

int lengthOfLL(node *&head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

node *KAppend(node *&head, int k)
{
    node *newHead;
    node *newTail;
    node *tail = head;
    int l = lengthOfLL(head);
    int count = 1;

    while (tail != NULL)
    {
        if (count == l - k)
        {
            newTail = tail;
        }
        else if (count == l - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

int main()
{

    return 0;
}