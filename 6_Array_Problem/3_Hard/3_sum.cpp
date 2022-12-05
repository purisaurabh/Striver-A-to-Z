#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int closest3Sum(int arr[], int n, int x)
    {
        // code here
        int res = INT_MAX;
        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            int low = i + 1;
            int high = n - 1;

            while (low < high)
            {
                int sum = arr[i] + arr[low] + arr[high];
                if (sum == x)
                    return sum;

                else if (sum > x)
                {
                    if (abs(sum - x) < abs(res - x))
                    {
                        res = sum;
                    }

                    high--;
                }

                else if (sum < x)
                {
                    if (abs(sum - x) < abs(res - x))
                    {
                        res = sum;
                    }

                    low++;
                }
            }
        }

        return res;
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
        int Arr[N];
        for (int i = 0; i < N; i++)
            cin >> Arr[i];
        int X;
        cin >> X;
        Solution obj;
        cout << obj.closest3Sum(Arr, N, X) << endl;
    }
    return 0;
}