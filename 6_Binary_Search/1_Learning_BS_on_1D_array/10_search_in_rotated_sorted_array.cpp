/*

In this problem we have to divide the array into part 
first part will be from start to mid including start ans mid;
and second one is from mid to end 
then
    in both the part we have apply the binary search respectively
    binary search in the sense 

    in first part if the target lies between the start and mid then get end = mid - 1
                  else then we have move start = mid +1

    in second part if the target lies between the mid ad end then we have to move start = mid +1;
                    else then we have to move the end back that is end = mid -1;

*/


#include <bits/stdtr1c++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) 
    {    
        int start = 0;
        int end = nums.size() - 1;
        
        while(start <= end)
        {
            int mid = (start + end)/2;
            
            if(nums[mid] == target)
                return mid;
            
            if(nums[start] <= nums[mid])
            {
                if(target <= nums[mid] && target >= nums[start])
                    end = mid-1;
                
                else
                    start = mid + 1;
            }
            
            else
            {
                if(target >= nums[mid] && target <= nums[end])
                   start  = mid+1;
                else
                    end = mid-1;
            }
            
        }
        return -1;
    }
};


int main()
{
    
}