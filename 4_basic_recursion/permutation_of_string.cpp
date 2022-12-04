class Solution {
public:
    
    void permutation(vector<int>& nums ,  vector<vector<int>>&v , int index)
    {
        // base case
        if(index >= nums.size())
        {
            v.push_back(nums);
            return;
        }
        
        for(int j = index ; j < nums.size() ; j++)
        {
            swap(nums[index] , nums[j]);
            permutation(nums , v , index+1);
            swap(nums[index] , nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>v;
        permutation(nums , v , 0);
        return v;
    }
};