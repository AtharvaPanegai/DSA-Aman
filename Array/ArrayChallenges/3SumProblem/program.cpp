#include "bits/stdc++.h"
using namespace std;

void threeSum(vector<int> v, int target)
{
    bool found = false;
    int n = v.size();
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int low = i + 1;
        int high = n - 1;
        while (low < high)
        {
            int curr = v[low] + v[high] + v[i];
            if (curr == target)
            {
                found = true;
            }
            else if (curr < target)
            {
                high--;
            }
            else
            {
                low++;
            }
        }
    }
}

int main()
{

    return 0;
}