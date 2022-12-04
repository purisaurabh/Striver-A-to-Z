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


bool linear_search(int arr[] , int size , int key)
{
    print_arr(arr , size);


    if(size == 0)
        return false;
    
    if(arr[0] == key)
        return true;

    return linear_search(arr+1 , size-1 , key);

}

int main()
{
    int arr[] = {1,5,3,2,7,9};
    int key = 9;

    bool ans = linear_search(arr , 6 , key);
    if(ans)
    {
        cout << "Element is present " << endl;
    }

    else
    {
        cout << "Element is not present " << endl;
    }
    return 0;
}