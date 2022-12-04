#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        // Your code here
        int maxi = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            maxi = max(sum, maxi);

            if (sum < 0)
                sum = 0;
        }

        return maxi;
    }
};

//{ Driver Code Starts.

int main()
{
    int t, n;

    cin >> t;   
    while (t--)
    {

        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
