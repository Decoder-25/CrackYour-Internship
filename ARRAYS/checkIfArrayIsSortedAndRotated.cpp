class Solution{
    public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int num){
        
        // Your code here
       int b=0,s=0;
       for(int i=1;i<num;i++){
           if(arr[i]>arr[i-1]) b++;
           else s++;
       }
       if(b==0 || s==0) return 0;
       else {
           if(arr[0]>arr[num-1]) b++;
           else s++;
       }
       return (b==1 || s==1);
        
    }