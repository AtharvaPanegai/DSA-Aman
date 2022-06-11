#include "bits/stdc++.h"
using namespace std;
#define n 100

class queuee
{
    int *arr;
    int front;
    int back;

public:
    queuee()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue is Full"
                 << "\n";
            return;
        }
        back++;
        arr[back] = x;

        // for first time inserting element
        if (front == -1)
            front++;
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is Empty";
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is empty";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
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