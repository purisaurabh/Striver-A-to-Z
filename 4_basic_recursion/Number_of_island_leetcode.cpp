class Solution {
public:
    
    void recursive_call(vector<vector<char>>&grid , int i , int j)
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
        {
            return;
        }
        
        if(grid[i][j] == '0')
            return;
        
        grid[i][j] = '0';
        
        recursive_call(grid , i+1 , j);
        recursive_call(grid , i-1 , j);
        recursive_call(grid , i , j+1);
        recursive_call(grid , i , j-1);
    }
    
    
    int numIslands(vector<vector<char>>& grid) 
    {
        int count = 0;
        int row = grid.size();
        int col = grid[0].size();
        
        for(int i = 0 ; i < row ; i++)
        {
            for(int j = 0 ; j < col ; j++)
            {
                if(grid[i][j] == '1')
                {
                    recursive_call(grid , i , j);
                    count++;
                }
            }
        }
        
        return count;
    }
};