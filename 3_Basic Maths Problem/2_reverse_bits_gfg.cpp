
/*
Given a 32 bit number X, reverse its binary form and print the answer in decimal.

Example 1:

Input:
X = 1
Output:
2147483648
Explanation:
Binary of 1 in 32 bits representation-
00000000000000000000000000000001
Reversing the binary form we get,
10000000000000000000000000000000,
whose decimal value is 2147483648.




Example 2:

Input:
X = 5
Output:
2684354560
Explanation:
Binary of 5 in 32 bits representation-
00000000000000000000000000000101
Reversing the binary form we get,
10100000000000000000000000000000,
whose decimal value is 2684354560.

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long reversedBits(long long n)
    {
        // code here
        long long ans = 0;
        for (long long i = 0; i < 32; i++)
        {
            ans = ans << 1;
            if (n & 1)
            {
                ans++;
            }

            n = n >> 1;
        }

        return ans;
    }
};
