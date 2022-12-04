#include<iostream>
using namespace std;

/*
void print_name(int n)
{
    if(n == 0)
        return;

    cout << "Immanuel" << endl;
    print_name(n-1);
}
*/


void print_name(int i , int n)
{
    if(i > n)
        return;

    cout << "Immanuel" << endl;
    print_name(i+1 , n);


}
int main()
{
    int n;
    cin >> n;
    print_name(1 , n);
    return 0;
}