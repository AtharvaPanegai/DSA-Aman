#include "bits/stdc++.h"
using namespace std;

class MyQueue
{
    // main stack
    stack<int> s1;
    // other stack
    stack<int> s2;

    void push(int x)
    {
        s1.push(x);
    }

    void pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty"
                 << "\n";
            return;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << s2.top() << " Deleted";
        s2.pop();
    }

    int peek()
    {
        if (s1.empty() && s2.empty())
        {
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool empty()
    {
        return (s1.empty() && s2.empty());
    }
};

int main()
{

    return 0;
}