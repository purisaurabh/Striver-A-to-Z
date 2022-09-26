#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int start, int end, int k)
{

    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;

    if (k == arr[mid])
    {
        return mid;
    }
    else if (k < arr[mid])
    {
        return binarySearch(arr, start, mid - 1, k);
    }
    else
    {
        return binarySearch(arr, mid + 1, end, k);
    }
}

int main()
{
    int arr[] = {2, 3, 7, 10, 13, 14, 17};

    int k = 14;

    int start = 0;
    int end = 6;

    int loc = binarySearch(arr, start, end, k);

    if (loc == -1)
    {
        cout << "Element not found!" << endl;
    }
    else
    {
        cout << "Element " << k << " Found at " << loc << " index";
    }
}