/*
A set in STL is a container that stores unique elements in a particular order.
Every operation on a set takes
O(1) complexity in the average case and takes O(n) in the worst case
*/




/*
begin() – return an iterator pointing to the first element in the set.
s.begin();
*/




/*
end() – returns an iterator to the theoretical element after the last element.
s.end();
*/



/*
count() – returns true or false based on whether the element is present in the set or not.
set<int> s;
s.insert(1);
s.insert(2);
s.count(2); //returns true
*/



#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }


    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in set" << endl;



    s.erase(s.begin());


    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    cout << "The size of the set is: " << s.size() << endl;



    if (s.empty() == false)
        cout << "The set is not empty " << endl;
    else
        cout << "The set is empty" << endl;




    s.clear();
    cout << "Size of the set after clearing all the elements: " << s.size();
}




/*

cbegin() – it refers to the first element of the set.
cend() – it refers to the theoretical element after the last element of the set.
rbegin() – it points to the last element of the set.
rend() – it points to the theoretical element before the first element of the set.
bucket_size() – gives the total number of elements present in a specific bucket in a set.
emplace() – to insert an element in the set.
max_size() – the maximum elements a set can hold.
max_bucket_count() – to check the maximum number of buckets a set can hold.

*/