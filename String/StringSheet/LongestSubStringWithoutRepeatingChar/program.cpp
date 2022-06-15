#include "bits/stdc++.h"
using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_set<char> st;
    int i = 0, j = 0, n = s.size(), ans = 0;
    while (j < n)
    {
        // check if the char does not exist in the set
        if (st.find(s[j]) == st.end())
        {
            // insert the char in the set
            st.insert(s[j++]);
            ans = max(ans, j - i);
        }
        else
        {
            st.erase(s[i++]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}