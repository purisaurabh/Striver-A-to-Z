// counting with recursion 
// we have to print count number from n;
#include <bits/stdc++.h>
using namespace std;

// print in normal order
/*
void get_counting(int n)
{   
    if(n <= 0)
    {
        return ;
    }

    get_counting(n-1);
    cout << n << endl;
}
*/

void get_counting(int n)
{
    if(n <= 0)
        return; 
    
    cout << n << endl;
    get_counting(n-1);
}


int main()
{
    int n ;
    cout << " Enter a number : " << endl;
    cin >> n ;
    
    get_counting(n);
}