#include <bits/stdc++.h>
using namespace std;

class Solution
{
    
public:
    vector<int> leaders(int arr[], int n)
    {
        vector<int> v;
        int maxi = INT_MIN;

        for (int i = n - 1; i >= 0; i--)
        {
            maxi = max(maxi, arr[i]);
            if (maxi <= arr[i])
            {
                v.push_back(arr[i]);
            }
        }

        reverse(v.begin(), v.end());
        return v;
    }
};

int main()
{
    long long t;
    cin >> t; 
    while (t--)
    {
        long long n;
        cin >> n; // total size of array

        int a[n];

        // inserting elements in the array
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        // calling leaders() function
        vector<int> v = obj.leaders(a, n);

        // printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
    }
}