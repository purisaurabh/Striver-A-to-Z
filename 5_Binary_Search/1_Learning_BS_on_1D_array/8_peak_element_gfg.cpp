class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int s = 0;
       int e = n-1;
       
       int peak_element = 0;
       
       while(s <= e)
       {
           int mid = s + (e-s)/2;
           
           if(arr[mid] > arr[mid - 1])
           {
               peak_element = mid;
               s = mid + 1;
           }
           
           else
           {
               e = mid - 1;
           }
       }
       
       return peak_element;
    }
};