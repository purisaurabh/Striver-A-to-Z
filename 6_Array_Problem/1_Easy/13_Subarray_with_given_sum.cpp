#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int len_of_longest_sub_arr(int nums[], int N, int K)
    {
        int ans = 0;
        int sum = 0;
        unordered_map<int, int> mp;

        for (int i = 0; i < N; i++)
        {
            // add each number in the sum
            sum += nums[i];

            // if the given sum is not found int the map then add it into the map
            if (mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }

            // if till now we get sum == k then update the ans
            if (sum == K)
            {
                ans = max(ans, i + 1);
            }

            /*
            this condition for if we found the (sum - k) number exists means
            we can find the sum in further array element also
            so we update the ans by minusing the given sum index and (sum-k)'s index
            */

            else if (mp.find(sum - K) != mp.end())
            {
                ans = max(ans, i - mp[sum - K]);
            }
        }
        return ans;
    }
};


int main()
{
    // code

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.len_of_longest_sub_arr(a, n, k) << endl;
    }

    return 0;
}