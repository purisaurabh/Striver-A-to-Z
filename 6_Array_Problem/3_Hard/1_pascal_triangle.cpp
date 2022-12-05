#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<ll> nthRowOfPascalTriangle(int n)
    {
        // code here
        vector<vector<ll>> v;
        for (ll i = 0; i < n; i++)
        {
            vector<ll> row(i + 1, 1);

            for (ll j = 1; j < i; j++)
            {
                row[j] = (v[i - 1][j] + v[i - 1][j - 1]) % 1000000007;
            }

            v.push_back(row);
        }

        vector<ll> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(v[n - 1][i]);
        }

        return ans;
    }
};


void printAns(vector<ll> &ans)
{
    for (auto &x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}