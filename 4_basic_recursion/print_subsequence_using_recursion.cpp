#include <bits/stdc++.h>
using namespace std;

void print_subsequence(int index , vector<int>&ans , int arr[] , int n)
{
    if(index == n)
    {
        for(auto i : ans)
        {
            cout << i << " ";
        }

        if(ans.size() == 0)
        {
            cout << "{}";
        }

        cout << endl;
        return;
    }

    //not take or not include or exclude condition this element is not added into the subsequence;
    print_subsequence(index + 1 , ans , arr , n);

    //take or include condition into the subsequence
    ans.push_back(arr[index]);
    print_subsequence(index + 1 , ans , arr , n);
    ans.pop_back();
}

int main()
{
    int arr[] = {1,2,3};
    int n = 3;
    int index = 0;
    vector <int> ans;
    print_subsequence(index , ans , arr , n);
    return 0;
}