class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long  res = 0;
        int leftval[n], rightval[n];
        leftval[0]=arr[0];
        for(int i = 1; i<n;i++){
            leftval[i] = max(arr[i], leftval[i-1]);
        }
        rightval[n-1]=arr[n - 1];
        for(int i = n - 2; i>=0; i--){
            rightval[i] = max(arr[i], rightval[i+1]);
        }
        for(int i = 0; i<n; ++i){
            res += (min(leftval[i], rightval[i])-arr[i]);
        }
        return res;
    }
};