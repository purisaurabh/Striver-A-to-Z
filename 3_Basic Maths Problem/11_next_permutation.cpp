#include <bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(int N, vector<int>&arr)
{
    int index1, index2;
    for (int i = N - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index1 = i;
            break;
        }
    }

    if (index1 >= 0)
    {
        for (int i = N - 1; i >= index1; i--)
        {
            if (arr[i] > arr[index1])
            {
                index2 = i;
                break;
            }
        }
        swap(arr[index1], arr[index2]);
        reverse(arr.begin() + index1 + 1, arr.end());
    }
    else
    {
        reverse(arr.begin(), arr.end());
    }
    return arr;
}





int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    nextPermutation(n, v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}