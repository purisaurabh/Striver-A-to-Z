#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> A{1, 2, 3, 3, 4, 5, 6, 7};
    vector<int> B{3, 3, 4, 4, 5, 8};

    vector<int> ans;

    int i = 0, j = 0; // to traverse the arrays

    while (i < A.size() && j < B.size())
    {
        if (A[i] < B[j])
        { // if current element in i is smaller
            i++;
        }
        else if (B[j] < A[i])
        {
            j++;
        }
        else
        {
            ans.push_back(A[i]); // both elements are equal
            i++;
            j++;
        }
    }
    cout << "The elements are: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}