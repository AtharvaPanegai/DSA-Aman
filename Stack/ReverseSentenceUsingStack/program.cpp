#include "bits/stdc++.h"
using namespace std;

void reverseString(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        if (s[i] != ' ' && i < s.length())
        {
            word += s[i];
        }
        st.push(word);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
}

int main()
{

    return 0;
}