#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x)
{
    // code here
    int fl = -1e9;
    int cl = 1e9;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
        {
            fl = max(fl, arr[i]);
        }

        if (arr[i] >= x)
        {
            cl = min(cl, arr[i]);
        }
    }

    if (cl == 1e9)
    {
        cl = -1;
    }

    if (fl == -1e9)
    {
        fl = -1;
    }

    return make_pair(fl, cl);
}