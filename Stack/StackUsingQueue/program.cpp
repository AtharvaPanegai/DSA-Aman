#include "bits/stdc++.h"
using namespace std;

class Stack
{
    queue<int> q1;

public:
    Stack()
    {
    }

    void pop()
    {
        q1.pop();
    }

    void push(int val)
    {
        q1.push(val);
        for (int i = 0; i < q1.size() - 1; i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }

    int top()
    {
        return q1.front();
    }

    bool empty()
    {
        return q1.empty();
    }
};

int main()
{

    return 0;
}