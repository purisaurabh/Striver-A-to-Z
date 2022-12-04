#include<iostream>
using namespace std;

// Time complexity will be (2^n) that is exponential 
 
int f(int n)
{
    if( n <= 1)
        return n;
    
    return f(n-1) + f(n-2);
}

int fib(int n)
{
    if(n == 0)
        return 1;

    return fib(n-1)*n;
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}