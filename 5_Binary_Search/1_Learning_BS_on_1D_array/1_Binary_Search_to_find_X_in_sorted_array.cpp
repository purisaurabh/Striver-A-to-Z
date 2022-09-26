#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 7, 10, 13, 14, 17};
    int k = 14;

    // Binary search
    int n = 6;
    int start = 0, end = n;
    int mid, loc = -1;
    while (start <= n - 1)
    {
        // Making array half everytime
        mid = (start + end) / 2;

        // checking in which part the element is present
        if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        if (arr[mid] == k)
        {
            loc = mid;
            break;
        }
    }
    if (loc == -1)
    {
        cout << "Element not found!" << endl;
    }
    else
    {
        cout << "Element " << k << " Found at " << loc << " index";
    }
}