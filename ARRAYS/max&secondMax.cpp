class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
        vector<int> res;
        int n = sizeOfArray;
        sort(arr,arr+n);
        max = arr[n-1];
        res.push_back(max);
        for(int i = n-1; i>=0; i--){
            if(arr[i] < max){
                res.push_back(arr[i]);
                return res;
            }
        }
        res.push_back(-1);
        return res;
    }