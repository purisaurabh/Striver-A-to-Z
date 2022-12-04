//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{

public:
    long long get_factorial(long long n)
    {
        if(n == 0)
            return 1;

        return n * get_factorial(n-1);
    }
    
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long>v;
        
        for(long long i = 0 ; i < N ; i++)
        {
            long long fact_value = get_factorial(i+1);
            
            if(fact_value <= N)
            {
                v.push_back(fact_value);
            }
            
            else
                break;
        }
        
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}