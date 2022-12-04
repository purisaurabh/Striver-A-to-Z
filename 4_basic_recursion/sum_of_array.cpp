#include<iostream>
using namespace std;

void sum_of_arr(int arr[] , int size , int &sum)
{
    if(size == 0)
        return;
    
    sum += arr[0];

    return sum_of_arr(arr + 1 , size - 1 , sum);

}


int main()
{
    int arr[] = {1 ,2,3,4,5};
    int sum = 0;
    sum_of_arr(arr , 5 , sum);
    cout << "Sum is : " << sum << endl;

    return 0;
}