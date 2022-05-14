class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
        int st=0;
        int en=n-1;
        vector<int>ans;
        
        while(st<=en )
        {
         ans.push_back(arr[en]);
         ans.push_back(arr[st]);
         st++;
         en--;
        }
        for(int i=0;i<n;i++)
        {
            if(ans[i]!=arr[i])
            {
                arr[i]=ans[i];
            }
        }
    }
    	
};