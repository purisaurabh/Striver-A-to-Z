class Solution {
public:
    
    void combination(string digits , string output , vector<string>&v ,int index , string arr[])
    {
        // base case
        if(index >= digits.length())
        {
            v.push_back(output);
            return;
        }
        
        int number = digits[index] - '0';
        string str = arr[number];
        
        for(int i = 0 ; i < str.length() ; i++)
        {
            output.push_back(str[i]);
            combination(digits , output , v , index+1 ,arr);
            output.pop_back();
        }
        
    }
    
    vector<string> letterCombinations(string digits) 
    {
        vector<string>v;
        
        if(digits.length() == 0)
            return v;
        
        string output = "";
        string arr[] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
        
        combination(digits , output , v , 0 , arr);
        
        return v;
        
    }
};