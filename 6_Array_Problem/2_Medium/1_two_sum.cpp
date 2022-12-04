#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(target - nums[i]) != m.end())
        {
            return {i, m[target - nums[i]]};
        }

        m[nums[i]] = i;
    }

    return {};
}

int main()
{
    int n;
    cin >> n;
    vector<int>v;

    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    twoSum(v , 9);
}