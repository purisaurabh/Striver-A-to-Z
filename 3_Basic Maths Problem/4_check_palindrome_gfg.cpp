#include <bits/stdc++.h>
using namespace std;


class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    string ans = to_string(n);
		    string another = ans;
		    
		    reverse(ans.begin(), ans.end());
		    
            if(another == ans )
                return "Yes";
                
            else
                return "No";
		    
		}
};
