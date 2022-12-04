class Solution{
public:	
	int findKRotation(int a[], int n) 
	{
	    // code here
	    int ans = -1;

        for(int i=1;i<n;i++)
        {
            if(a[i-1]>a[i])
            {
                ans = i-1;
                break;
            }
            
        }

        if(ans == -1)
            return 0;
            
        return ans + 1;
	}

};
