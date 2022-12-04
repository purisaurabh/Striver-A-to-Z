//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool can_eat_in_time(vector<int>&piles , int k , int h)
    {
        int hours = 0;
        for(int pile : piles)
        {
            int remaining = pile/k;
            hours += remaining;
            
            if(pile % k != 0)
                hours++;
        }
        
        return hours <= h;
    }
    int Solve(int N, vector<int>& piles, int H) 
    {
        // Code here
        int left = 1;
        int right = 1000000000;
        
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            
            if(can_eat_in_time(piles , mid , H))
                right = mid -1;
                
            else
                left = mid + 1;
        }
        
        return left;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}