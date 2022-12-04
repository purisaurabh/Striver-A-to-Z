
// Insert an element from unsorted array to its correct position in sorted array 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i++)
    {
        int current = arr[i];

        int j = i - 1;

        while(arr[j] > current && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = current;
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    
}

















































#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i++)
    {
        int current = arr[i];
        int j = i-1;
        
        while(arr[j] > current && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = current;
    }
}





















/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100] , temp , n , j ;

    cout << "Enter number of element you want to sort : ";
    cin >> n;

    cout << "Enter " << n << " Element ";

    for(int k = 0 ; k < n ; k++)
    {
        cin >> arr[k];
    }


    for(int k = 1 ; k < n ; k++)
    {
        temp = arr[k];
        j = k-1;

        while( temp < arr[j] && j>=0 )
        {
            arr[j+1] = arr[j];
            --j;
        }

        arr[j+1] = temp;
    }

    cout << "Sorted element are : " << endl;

    for(int k = 0 ; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}

*/