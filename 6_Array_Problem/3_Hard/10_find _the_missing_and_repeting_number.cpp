#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int *findTwoElement(int *arr, int n)
    {
        // code here
        sort(arr, arr + n);
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }

        int *ans = new int[2];

        for (int i = 1; i <= n; i++)
        {
            if (m[i] > 1)
                ans[0] = i;

            if (m[i] == 0)
                ans[1] = i;
        }

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}