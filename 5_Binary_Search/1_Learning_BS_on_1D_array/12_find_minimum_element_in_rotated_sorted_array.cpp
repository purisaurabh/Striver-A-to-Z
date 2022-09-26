#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
      int findMin(vector<int> &num) 
      {
         int s = 0;
         int e = num.size()-1;
          
         while(s < e)
         {
             int mid = s + (e-s)/2;
             if(num[mid] > num[e])
             {
                 s = mid +1;
             }
             
             else
             {
                 e = mid;
             }
         }
          
          return num[s];
      }

};

int main()
{
    
}