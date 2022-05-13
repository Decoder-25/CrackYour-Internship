class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int count[1000000] = {0};
       for(int i=0; i< n; i++){
           if(arr[i] >= 0)
           count[arr[i]]++;
       }
       for(int i=1; i<1000000; i++){
           if(count[i] == 0)
           return i;
       }
    } 
};