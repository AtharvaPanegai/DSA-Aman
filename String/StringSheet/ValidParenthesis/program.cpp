#include "bits/stdc++.h"
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else if (st.empty() || (st.top() == '(' && c != ')') || (st.top() == '[' && c != ']') || (st.top() == '{' && c != '}'))
            return false;

        st.pop();
    }

    return st.empty();
}

int main()
{

    return 0;
}