#include<iostream>
using namespace std;

void print_arr(int arr[] , int start , int end)
{
    int mid = start + (end - start)/2;
    cout << "Mid element of the array is : " << arr[mid] << endl;

    for(int i = start ; i <= end ; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

bool binary_search(int arr[] , int start , int end , int key)
{
    print_arr(arr , start , end);

    if(start > end)
        return false;

    int mid = start + (end - start)/2;

    if(arr[mid] == key)
        return true;

    if(arr[mid] < key)
    {
        return binary_search(arr , mid + 1 , end , key);
    }

    else
    {
        return binary_search(arr , start , mid - 1 , key);
    }
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int key = 9;
    bool ans = binary_search(arr , 0 , 8, key);

    if(ans)
    {
        cout << "Element is present " << endl;
    }

    else
    {
        cout << "Element is not present "<< endl;
    }
    return 0;
}