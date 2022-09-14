
/*
Given a number N. Count the number of digits in N which evenly divides N.


Example 1:

Input:
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly



Example 2:

Input:
N = 23
Output
0
Explanation:
2 and 3, none of them
divide 23 evenly

*/

#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int evenlyDivides(int N)
    {
        // code here
        int num = N;
        int count = 0;
        while (N)
        {
            int number = N % 10;
            if (number != 0 && num % number == 0)
            {
                count++;
            }

            N = N / 10;
        }

        return count;
    }
};