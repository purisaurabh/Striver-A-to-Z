class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
     //modified  binary search   
     int lo = 0;
     // difference 1: note it is not arr.size()-1 ,i.e leave k elements
     int hi = arr.size()-k -1;
     while(lo <= hi)
     {
         int mid = lo+(hi-lo)/2;
         
         // difference 2: easy way to remember
         // x is mid point :
         // x = (arr[mid+k] + arr[mid +k])/2
         // abs value will not work because sign is important to handle
         
         if(x - arr[mid] > arr[mid + k] -x)
         {
                // go right
                lo = mid +1;
         }
         else
         {
             // difference 2: handle equals  and "less than" sign case with same logic 
             // go left
             hi = mid-1;
         }
        }
        
        vector<int> res(arr.begin()+ lo, arr.begin()+ lo +k);
        return res;
    }
};