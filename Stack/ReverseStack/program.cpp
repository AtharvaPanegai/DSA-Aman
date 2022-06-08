#include "bits/stdc++.h"
using namespace std;

void insertAtBottom(stack<int> st, int ele)
{
    if (st.empty())
    {
        return;
    }
    int topEle = st.top();
    st.pop();

    insertAtBottom(st, ele);
    st.push(ele);
}

void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int ele = st.top();
    st.pop();
    reverseStack(st);

    insertAtBottom(st, ele);
}

int main()
{

    return 0;
}