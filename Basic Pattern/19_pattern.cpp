/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *


*/

#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5 ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout << "*";
        }

        for(int j = i; j < 5 ; j++)
        {
            cout << "  ";
        }

        for(int j = i ; j >= 1; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    for(int i = 5; i > 1 ; i--)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout << "*";
        }

        for(int j = i; j < 5 ; j++)
        {
            cout << "  ";
        }

        for(int j = i ; j >= 1; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
}