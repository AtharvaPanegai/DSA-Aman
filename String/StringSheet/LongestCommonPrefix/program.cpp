#include "bits/stdc++.h"
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    int n = strs.size();
    if (n == 0)
        return "";

    sort(strs.begin(), strs.end());
    string a = strs[0];
    string b = strs[n - 1];

    string word = "";
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            word += a[i];
        }
        else
            break;
        }

    return word;
}

int main()
{

    return 0;
}