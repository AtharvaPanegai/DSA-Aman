// find the minimum element in the array and swap it with the starting element in the unsorted array

#include "bits/stdc++.h"
using namespace std;

void selectionSort(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v = {12, 45, 23, 51, 19, 8};
    selectionSort(v);

    return 0;
}