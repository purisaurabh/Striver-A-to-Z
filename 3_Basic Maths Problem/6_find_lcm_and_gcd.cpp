/*
Example 1:

Input:
A = 5 , B = 10
Output:
10 5
Explanation:
LCM of 5 and 10 is 10, while
their GCD is 5.


Example 2:

Input:
A = 14 , B = 8
Output:
56 2
Explanation:
LCM of 14 and 8 is 56, while
their GCD is 2.

*/




class Solution
{
public:
    long long find_gcd(long long a, long long b)
    {
        if (b == 0)
            return a;

        return find_gcd(b, a % b);
    }

    long long find_lcm(long long a, long long b, long long gcd)
    {
        return (a / gcd) * b;
    }
    vector<long long> lcmAndGcd(long long A, long long B)
    {
        // code here

        long long gcd = find_gcd(A, B);
        long long lcm = find_lcm(A, B, gcd);
        /*
        long long gcd = __gcd(A,B);
        long long lcm = (A/gcd)*B;
        */
        vector<long long> v;
        v.push_back(lcm);
        v.push_back(gcd);

        return v;
    }
};