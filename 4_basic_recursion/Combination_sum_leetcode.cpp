class Solution {
public:
    
    void solve(vector<int>&arr ,int target , vector<vector<int>>&ans , vector<int>output , int index)
    {
        //check if the index cross the size
        if(index == arr.size())
        {
            // at the end target value should be 0 then we add it into the ans
            if(target == 0)
            {
                ans.push_back(output);
            }
            
            return;
        }
        
        
        // this is pick condition
        // his condition,value present at the index should less than equal to the target value
        if(arr[index] <= target)
        {
            // we push the element into the output array
            output.push_back(arr[index]);
            
            //then we update the target value by minusing the index value and make a recursive call
            solve(arr , target-arr[index] , ans , output , index);
            
            // then backtracking is happen here
            output.pop_back();
        }
        
        //this is the not pick condition. Here we only increase the index 
        solve(arr , target, ans , output , index+1);
    }
    vector<vector<int>> combinationSum(vector<int>&candidates, int target) 
    {
        //to store the ans
        vector<vector<int>>ans;
        
        //to store the each iteration
        vector<int>output;
        
        ///to show the index
        int index = 0;
        
        //recursive call
        solve(candidates , target , ans , output , index);
        
        //print the answer
        return ans;
    }
};