#include "bits/stdc++.h"
using namespace std;

int counSubString(string s)
{
    int ans = 0;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        int j = i - 1;
        int k = i;
        while (k < len - 1 && s[k] == s[k + 1])
            k++;
        ans = (k - j) * (k - j + 1) / 2;
        i = k++;
        while (~j && k < len && s[k++] == s[j--])
            ans++;
    }
    return ans;
}

int main()
{

    return 0;
}