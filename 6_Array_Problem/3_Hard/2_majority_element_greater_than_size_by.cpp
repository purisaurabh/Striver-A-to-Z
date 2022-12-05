#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(int arr[], int n)
{
    unordered_map<int, int> mp;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto x : mp)
    {
        if (x.second > (n / 3))
            ans.push_back(x.first);
    }

    return ans;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 2};
    vector<int> majority;
    majority = majorityElement(arr, 5);
    cout << "The majority element is ";

    for (auto it : majority)
    {
        cout << it << " ";
    }
}