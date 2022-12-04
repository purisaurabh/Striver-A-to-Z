#include<iostream>
using namespace std;

bool power_of_four(int n)
{
    if(n < 1)
        return false;
    
    if(n == 1)
        return true;

    return n % 4 == 0 && power_of_four(n / 4);
}
int main()
{
    int a = 16;
    cout << power_of_four(a) << endl;
    return 0;
}