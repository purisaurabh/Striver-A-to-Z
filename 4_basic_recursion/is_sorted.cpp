#include<iostream>
using namespace std;

void print_arr(int arr[] , int size )
{
    cout << "Size of the array is : " << size << endl;

    cout << "Element of the array is : " ;
    for(int i = 0 ;  i < size ; i++)
    {
        cout << arr[i] << " ";
    } 

    cout << endl;
}


bool is_sorted(int arr[] , int size)
{
    print_arr(arr , size);
    // Base case
    // if the size of the array is zero or the size of the array is on then it will be also sorted

    if(size == 0 || size == 1)
        return true;
    
    // check the first two element id sorted or not 
    if(arr[0] > arr[1])
        return false;


    // then we have to increase the arr by one element and size will decrease by 1 
    else
        return is_sorted(arr+1 , size-1);
}


int main()
{
    int arr[] = {1,2,9,4,5};
    
    bool ans = is_sorted(arr , 5);
    
    if(ans)
    {
        cout << "Array is sorted"<< endl;
    }

    else
    {
        cout << "Array is not sorted " << endl;
    }
    return 0;
}