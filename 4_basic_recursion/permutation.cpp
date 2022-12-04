class Solution {
public:

    //This is optimize approach 
    void all_permutation(vector<int>&nums , vector<vector<int>>&ans , int index)
        {
            if(nums.size() == index)
            {
                ans.push_back(nums);
                return;
            }
            
            for(int i = index ; i < nums.size() ; i++)
            {
                swap(nums[i] , nums[index]);
                all_permutation(nums , ans , index+1);
                swap(nums[i] , nums[index]);
            }
        }
    
        vector<vector<int>> permute(vector<int>& nums)
        {
            vector<vector<int>>ans;
            int index = 0;
            all_permutation(nums , ans , index);
            return ans;
        }























        
    

    //This is one approach we have to optimise this approach 
    
    void all_permutation(vector<int>& nums , vector<vector<int>>&ans,vector<int>&v, int freq[])
    {
        //if we get the permutation or reached at the last permutation
        if(v.size() == nums.size())
        {
            ans.push_back(v);
            return;
        }
        
        // them traverse the whole array 
        for(int i = 0 ; i < nums.size() ; i++)
        {
            // check if the the given element is visited or not 
            // if not visited the we have to push into the vector
            if(!freq[i])
            {
                v.push_back(nums[i]);
                //and make that is visited
                freq[i] = 1;
                all_permutation(nums , ans , v , freq);
                freq[i] = 0;
                v.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>v;
        int freq[nums.size()];
        for(int i = 0 ; i < nums.size() ; i++)
        {
            freq[i] = 0;
        }
        all_permutation(nums , ans , v , freq);
        return ans;
    }
};