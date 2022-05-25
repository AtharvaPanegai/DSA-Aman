#include "bits/stdc++.h"
using namespace std;

int main()
{
    // input the size of the array
    int sizeOfArray = 0;
    cin >> sizeOfArray;
    // initlize the array with the given size
    int array[sizeOfArray];
    // input the array
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> array[i];
    }

    // print the array
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << array[i];
    }

    return 0;
}