class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){    
        // Your code here
        int mini =  abs(arr[n - 1] - arr[0]) ;
        for(int i = 0;i<n-1;++i){
            mini = min(abs(arr[i]-arr[i+1]), mini);
        }
        return mini;
    }
};