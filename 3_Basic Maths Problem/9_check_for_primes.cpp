/*
Example 1:
Input: N = 3
Output: Prime
Explanation: 3 is a prime number

Example 2:
Input: N = 26
Output: Non-Prime
Explanation: 26 is not prime
*/

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int N)
{
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int n = 11;

    bool ans = isPrime(n);
    if (n != 1 && ans == true)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Non Prime Number";
    }
    return 0;
}