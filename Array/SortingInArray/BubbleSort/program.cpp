// repeatedly swap 2 adjecent numbers if they're in wrong order

#include "bits/stdc++.h"
using namespace std;

void bubbleSort(vector<int> v)
{
    int n = v.size();
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (v[i] < v[i + 1])
            {
                int temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                // swap(v[i + 1], v[i]);
            }
        }
        counter++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

void printVector(vector<int> v)
{
}

int main()
{
    vector<int> v = {12, 45, 23, 9, 8, 56};
    bubbleSort(v);
    return 0;
}