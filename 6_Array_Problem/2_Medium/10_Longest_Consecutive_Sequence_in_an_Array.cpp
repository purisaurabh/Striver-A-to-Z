#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:

    int findLongestConseqSubseq(int arr[], int n)
    {
        // Your code here
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(arr[i]);
        }
        int count = 0;
        vector<int> v;
        for (auto i : s)
        {
            v.push_back(i);
            count++;
        }
        int another_count = 1;
        int maxi = 1;
        for (int i = 1; i < count; i++)
        {
            if (v[i] == v[i - 1] + 1)
            {
                another_count++;
            }

            else
            {
                another_count = 1;
            }

            maxi = max(maxi, another_count);
        }

        return maxi;
    }
};


int main()
{
    int t, n, i, a[100001];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.findLongestConseqSubseq(a, n) << endl;
    }

    return 0;
}