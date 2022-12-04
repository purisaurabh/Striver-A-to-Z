// Jumps-Number of ways to reach destination 
#include <bits/stdc++.h>
using namespace std;

int Number_of_jumps(int n)
{
    if(n < 0)
    {
        return 0;
    }

    if(n == 0)
    {
        return 1;
    }

    return Number_of_jumps(n-1) + Number_of_jumps(n-2) + Number_of_jumps(n-3);  
    // recursion happens here
}

int main()
{
    int n ;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Number of Jump are : " << Number_of_jumps(n) << endl;
}

