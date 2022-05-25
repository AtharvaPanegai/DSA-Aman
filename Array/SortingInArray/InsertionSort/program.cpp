// insert an element from unsorted array to correct position in sorted array
#include "bits/stdc++.h"
using namespace std;

void insertionSort(vector<int> v)
{
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int currentNumber = v[i];
        while (v[j + 1] > v[j] && j >= 0)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = currentNumber;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v = {12, 45, 23, 51, 19, 8};
    insertionSort(v);
    return 0;
}