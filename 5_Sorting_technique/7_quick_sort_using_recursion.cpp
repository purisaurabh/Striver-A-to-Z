#include<iostream>
using namespace std;

int partition(int arr[] , int start , int end)
{
    int pivot_element = arr[start];

    int count = 0;
    for(int i = start + 1 ; i <= end ; i++)
    {
        if(arr[i] <= pivot_element)\
            count++;
    }

    int pivot_element_index = start + count;

    swap(arr[pivot_element_index] , arr[start]);

    // we have to arrange the left and and right element of the array by comparing the element 
    int i = start;
    int j = end;

    while(i < pivot_element_index && j > pivot_element_index)
    {
        while(arr[i] <= pivot_element)
        {
            i++;
        }

        while(arr[j] > pivot_element)
        {
            j--;
        }

        if(i < pivot_element_index && j > pivot_element_index)
        {
            swap(arr[i++] , arr[j--]);
        }
    }

    return pivot_element_index;
}


void quick_sort(int arr[] , int start , int end)
{
    if(start >= end)
        return;

    int p = partition(arr , start , end);

    //left part we have to sort
    quick_sort(arr , start , p-1);

    //right part we have to sort
    quick_sort(arr , p+1 , end);


}


int main()
{
    int arr[5] = {5,4,3,2,1};
    int n = 5;

    quick_sort(arr , 0 , n-1);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}