#include<iostream>
using namespace std;

void merge_all(int arr[] , int start , int end)
{
    int mid = (start + end)/2;

    // left part arr length
    int first_length = mid - start + 1;

    // right part arr length
    int second_length = end - mid;

    // create two arr

    //first array
    int first[first_length];
    //second array
    int second[second_length];

    // traversing start from start index 
    int index = start;


    // first of all element of left part element is push into the first array
    for(int i = 0 ; i < first_length ; i++)
    {
        first[i] = arr[index++];
    }

    // then tarversing the right part
    index = mid + 1;

    // all element of right part element is push into the second array
    for(int i = 0 ; i < second_length ; i++)
    {
        second[i] = arr[index++];
    }

    // after completing traversing the left and right part of the array
    // then we have to merge it 
    index  = start;
    int index_1 = 0;
    int index_2 = 0;

    
    while(index_1 < first_length && index_2 < second_length)
    {
        if(first[index_1] < second[index_2])
        {
            arr[index++] = first[index_1++];
        }

        else
        {
            arr[index++] = second[index_2++];
        }
    }


    while(index_1 < first_length)
    {
        arr[index++] = first[index_1++];
    }

    while(index_2 < second_length)
    {
        arr[index++] = second[index_2++];
    }

}

void merge_sort(int arr[] , int start , int end)
{
    // base case
    if(start >= end)
        return;
        
    //calculate the mid
    int mid = (start + end)/2;

    // divide the left part 
    merge_sort(arr , start , mid);

    //divide the right part
    merge_sort(arr , mid+1 , end);

    // we have to merge all thr divided arr 
    merge_all(arr , start , end);
}

int main()
{
    int arr[10] = {1,45,4,3,2,66,77,6,9,8};
    int n = 10;
    merge_sort(arr , 0 , n-1);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}