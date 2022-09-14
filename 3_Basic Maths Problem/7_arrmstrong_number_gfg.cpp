#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n)
    {
        // code here
        int num = n;
        int result = 0;
        while(num)
        {
            int digit = num% 10;
            result += pow(digit , 3);
            num = num /10; 
        }
        
        if(result == n)
            return "Yes";
            
        else
            return "No";
    }
};