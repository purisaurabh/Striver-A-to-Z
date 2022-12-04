#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int count(int arr[], int n, int x)
    {
        // code here
        int ans_1 = 0;
        int ans_2 = -1;

        // for the first occurance of the given element
        int s = 0;
        int e = n - 1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (arr[mid] == x)
            {
                ans_1 = mid;
                e = mid - 1;
            }

            else if (x < arr[mid])
            {
                e = mid - 1;
            }

            else
            {
                s = mid + 1;
            }
        }

        s = 0;
        e = n - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (arr[mid] == x)
            {
                ans_2 = mid;
                s = mid + 1;
            }

            else if (x < arr[mid])
            {
                e = mid - 1;
            }

            else
                s = mid + 1;
        }

        return ans_2 - ans_1 + 1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}