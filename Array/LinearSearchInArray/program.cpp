#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> v = {12, 45, 23, 51, 19, 8};
    // find the position of the 23
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 23)
        {
            cout << i << " ";
        }
    }

    return 0;
}