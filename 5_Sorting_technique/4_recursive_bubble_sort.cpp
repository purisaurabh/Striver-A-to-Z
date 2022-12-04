#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
	// Base case
	if (n == 1)
		return;

	// One pass of bubble sort. After  this pass, the largest element is moved (or bubbled) to end.
	for (int i=0; i< n-1; i++)
    {
		if (arr[i] > arr[i+1])
        {
			swap(arr[i], arr[i+1]);
        }
    }

	// Largest element is fixed recur for remaining array
	bubbleSort(arr, n-1);
}

void printArray(int arr[], int n)
{
	for (int i=0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array : \n");
	printArray(arr, n);
	return 0;
}
