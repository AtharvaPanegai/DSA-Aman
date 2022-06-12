#include "bits/stdc++.h"
using namespace std;

void toupcase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
    cout << s;
}

void tolowcase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }

    cout << s;
}

int main()
{
    string s = "ATHARVAPANEGAI";
    tolowcase(s);

    return 0;
}