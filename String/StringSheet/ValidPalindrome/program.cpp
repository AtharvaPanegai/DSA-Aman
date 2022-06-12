#include "bits/stdc++.h"
using namespace std;

bool isPalindrome(string s)
{
    for (int i = 0, j = s.size() - 1; i < s.size(), i < j; i++, j--)
    {
        while (!isalnum(s[i]))
            i++;
        while (isalnum(s[j]))
            j--;
        if (toupper(s[i]) != toupper(s[j]))
            return false;
    }

    return true;
}

int main()
{

    return 0;
}
