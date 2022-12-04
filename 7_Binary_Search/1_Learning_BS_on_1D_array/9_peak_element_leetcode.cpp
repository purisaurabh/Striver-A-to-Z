#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums)
{

    // Binary Search Approach

    int s = 0;
    int e = nums.size() - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (nums[mid] > nums[mid + 1])
        {
            e = mid;
        }

        else
        {
            s = mid + 1;
        }
    }

    return s;
}

int main()
{

}