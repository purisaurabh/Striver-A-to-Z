class Solution
{
public:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
    {
        // base case
        if (index >= nums.size())
        {
            ans.push_back(output);
            return;
        }

        // at this time we do not include element
        solve(nums, output, index + 1, ans);

        // at this call we include element in the output array
        output.push_back(nums[index]);
        solve(nums, output, index + 1, ans);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        // TO Store the answer
        vector<vector<int>> ans;

        // to store the ans at each iteration
        vector<int> output;

        // traverse through this
        int index = 0;

        // function call
        solve(nums, output, index, ans);

        return ans;
    }
};