#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> v;
        int s = 0;
        int e = nums.size() - 1;
        int mid = 0;
        int ans = -1;

        while (s <= e)
        {
            mid = s + (e - s) / 2;

            if (nums[mid] == target)
            {
                ans = mid;
                e = mid - 1;
            }

            else if (target < nums[mid])
            {
                e = mid - 1;
            }

            else
            {
                s = mid + 1;
            }
        }
        v.push_back(ans);

        ans = -1;
        s = 0;
        e = nums.size() - 1;
        mid = s + (e - s) / 2;

        while (s <= e)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                s = mid + 1;
            }

            else if (target < nums[mid])
            {
                e = mid - 1;
            }

            else
                s = mid + 1;

            mid = s + (e - s) / 2;
        }
        v.push_back(ans);

        return v;
    }
};



int main()
{
    return 0;
}