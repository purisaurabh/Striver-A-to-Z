
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverse(int arr[], int low, int high)
    {
        while (low < high)
        {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;

            low++;
            high--;
        }
    }

    void leftRotate(int arr[], int n, int d)
    {
        // code here
        d = d % n; // if the d is greather than the size of the array

        reverse(arr, d, n - 1);
        reverse(arr, 0, d - 1);
        reverse(arr, 0, n - 1);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}