#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        // your code here
        unordered_map<int, int> m;
        int ans = -1;
        for (int i = 0; i < size; i++)
        {
            m[a[i]]++;
        }

        for (auto i : m)
        {
            if (i.second > size / 2)
            {
                ans = i.first;
            }
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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}