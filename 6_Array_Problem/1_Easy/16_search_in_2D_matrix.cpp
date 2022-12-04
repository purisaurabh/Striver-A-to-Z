#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = matrix[mid / col][mid % col];

        if (element == target)
            return true;

        if (element < target)
            start = mid + 1;

        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    int val;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            cin >> val;
            temp.push_back(val);
        }
        v.push_back(temp);
        temp.clear();
    }
    
    searchMatrix(v , 5);
}