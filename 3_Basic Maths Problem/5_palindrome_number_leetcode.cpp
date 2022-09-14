/*
Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/



class Solution {
public:
    bool isPalindrome(int n) 
    {
        
        if(n < 0)
            return false;
        
        string ans = to_string(n);
        string another = ans;
        
        reverse(ans.begin() , ans.end());
        
        return another == ans;
        
        
//         if(n<0 || (n%10 == 0  && n != 0))
//         {
//             return false;
//         }
        
//         int rev = 0;
//         while(n > rev)
//         {
//             rev = rev*10 + n%10;
//             n = n/10;
//         }
        
//         return n == rev || n == rev/10;
     
    }
};