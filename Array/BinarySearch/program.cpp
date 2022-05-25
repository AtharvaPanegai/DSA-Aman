#include "bits/stdc++.h"
using namespace std;

void BinarySearch(vector<int> v, int key)
{
    int n = v.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high + low) / 2;
        if (mid == key)
        {
            cout << mid;
        }
        else if (key < mid)
        {
            high = mid - 1;
        }
        else if (key > mid)
        {
            low = mid + 1;
        }
    }
}

int main()
{

    return 0;
}