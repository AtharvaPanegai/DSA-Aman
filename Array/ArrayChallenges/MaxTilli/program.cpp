#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> v;
    int n = v.size();
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, v[i]);
        cout << mx;
    }

    return 0;
}