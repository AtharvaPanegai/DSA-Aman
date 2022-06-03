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
    int l = 0;
    node *temp = head;

    if (head == NULL)
    {
        return 0;
    }

    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }

    return l;
}

int intersectionOfLL(node *&head1, node *&head2)
{
    int l1 = lengthOfLL(head1);
    int l2 = lengthOfLL(head2);

    int d = 0;
    node *ptr1; // for longer
    node *ptr2; // for shorter

    if (l1 < l2)
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    else
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }

    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}

int main()
{

    return 0;
}