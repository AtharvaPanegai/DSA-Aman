#include "bits/stdc++.h"
using namespace std;

int minInArray(vector<int> v)
{
    int minInArray = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        minInArray = min(v[i], minInArray);
    }

    return minInArray;
}

int maxInArray(vector<int> v)
{
    int maxInArray = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        maxInArray = max(v[i], maxInArray);
    }

    return maxInArray;
}

int main()
{
    vector<int> v = {12, 45, 23, 51, 19, 8};
    cout << "Min In Array : " << minInArray(v) << "\n";
    cout << "Max In Array : " << maxInArray(v) << "\n";

    return 0;
}