/*
*****
*   *
*   *
*   *
*****

*/

#include <iostream>
using namespace std;

int main()
{
    int row , col;
    cout << "Enter the value of the row : ";
    cin >> row;

    cout << "Enter the value of the column : ";
    cin >> col;

    for(int i = 1; i <= row ; i++)
    {
        for(int j = 1 ; j <= col ;j++)
        {
            if(i == 1|| i == row)
            {
                cout << "*";
            }

            else if(j == 1 || j == col)
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
            
        }

        cout << endl;
    }
}