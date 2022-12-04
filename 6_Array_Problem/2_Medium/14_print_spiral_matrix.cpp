#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int findK(vector<vector<int>> &matrix, int n, int m, int k)
    {
        // Your code goes here
        vector<int> v;

        int row = matrix.size();
        int col = matrix[0].size();

        // index intialising

        int starting_row = 0;
        int ending_row = row - 1;

        int starting_col = 0;
        int ending_col = col - 1;

        int count = 0;
        int total = row * col;

        while (count < total)
        {
            for (int i = starting_col; count < total && i <= ending_col; i++)
            {
                v.push_back(matrix[starting_row][i]);
                count++;
            }
            starting_row++;

            for (int i = starting_row; count < total && i <= ending_row; i++)
            {
                v.push_back(matrix[i][ending_col]);
                count++;
            }
            ending_col--;

            for (int i = ending_col; count < total && i >= starting_col; i--)
            {
                v.push_back(matrix[ending_row][i]);
                count++;
            }
            ending_row--;

            for (int i = ending_row; count < total && i >= starting_row; i--)
            {
                v.push_back(matrix[i][starting_col]);
                count++;
            }
            starting_col++;
        }

        return v[k - 1];
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        int k = 0;
        // cin>>k;
        cin >> n >> m >> k;
        vector<vector<int>> a(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        Solution obj;

        cout << obj.findK(a, n, m, k) << "\n";
    }
}