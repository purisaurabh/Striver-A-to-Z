#include <iostream>

using namespace std;

void subArrWithSumKBruteForce(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                for (int p = i; p <= j; p++)
                    cout << arr[p] << " ";
                cout << endl;
            }
        }
    }
}

int main()
{

    int arr[] = {1, 9, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]), k = 10;

    cout << "Subarray with given sum is: " << endl;
    subArrWithSumKBruteForce(arr, n, k);

    return 0;
}