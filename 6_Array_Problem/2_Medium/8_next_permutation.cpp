#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 3, 2};

    next_permutation(arr, arr + 3); // using in-built function of C++

    cout << arr[0] << " " << arr[1] << " " << arr[2];

    return 0;
}




//                                     OR





#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextPermutation(int n, vector<int> arr)
    {
        // code here
        int k, l;
        for (k = n - 2; k >= 0; k--)
        {
            if (arr[k] < arr[k + 1])
                break;
        }

        if (k < 0)
        {
            reverse(arr.begin(), arr.end());
        }

        else
        {
            for (l = n - 1; l > k; l--)
            {
                if (arr[l] > arr[k])
                    break;
            }

            swap(arr[l], arr[k]);

            reverse(arr.begin() + k + 1, arr.end());
        }

        return arr;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for (int u : ans)
            cout << u << " ";
        cout << "\n";
    }
    return 0;
}