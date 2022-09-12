/*
ABCDE
ABCD
ABC
AB
A
*/


#include <iostream>
using namespace std;

int main()
{
    for(int i = 5; i >= 1 ; i--)
    {
        for(int j = 1; j <= i ; j++)
        {
            cout << ((char)(j+64));
        }

        cout << endl;
    }
}