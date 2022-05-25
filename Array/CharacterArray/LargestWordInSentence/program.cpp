#include "bits/stdc++.h"
using namespace std;

int lenOfLargestWord(char arr[], int n)
{
    int i = 0;
    int maxLen = INT_MIN;
    int currLen = 0;

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            maxLen = max(maxLen, currLen);
            currLen = 0;
        }
        else
        {
            currLen++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    return maxLen;
}

int main()
{

    return 0;
}