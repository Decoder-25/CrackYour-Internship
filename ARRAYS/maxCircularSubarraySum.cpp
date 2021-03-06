class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    
     int normalSum(int arr[],int num){
           int res=arr[0];
           int maxEnding=arr[0];
           for(int i=1;i<num;i++)
           {
              maxEnding=max(arr[i],maxEnding+arr[i]);
              res=max(res,maxEnding);
           }
           return res;
       }
    int circularSubarraySum(int arr[], int num){
        
        // your code here
         int max_normal=normalSum(arr,num);
       if(max_normal<0)
                 return max_normal;
       
       int arr_sum=0;
       for(int i=0;i<num;i++)
       {
       arr_sum=arr_sum+arr[i];
       arr[i]=-arr[i];
     
        }
        int max_circular=arr_sum+normalSum(arr,num);
        return max(max_normal,max_circular);
    }
};