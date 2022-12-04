#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
      
        int findZeroes(int arr[], int n, int m)
        {
            // code here
            int i = 0;
            int j = 0;

            while (i < n)
            {
                if (arr[i] == 0)
                    m--;

                if (m < 0)
                {
                    if (arr[j] == 0)
                    {
                        m++;
                    }
                    j++;
                }
                i++;
            }
            return i - j;
        }
};



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}