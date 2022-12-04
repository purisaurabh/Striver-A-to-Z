#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    // bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "After Using bubble sort: "
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    return 0;
}