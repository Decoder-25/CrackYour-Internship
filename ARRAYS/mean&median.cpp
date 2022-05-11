class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        sort(A,A+N);
        
        //your code here
        //If median is in fraction then convert it to integer and return
        int l = 0, r= N-1, x, y;
        if(N%2==0){
            x = A[N/2-1];
            y = x+1;
            return floor((x+y)/2);
        }
        else if(N%2!=0){
           for(int i=0;i<N;i++){
               return floor(A[N/2]);
           }
       }
        
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        //your code here
        int sum = 0;
        for(int i = 0; i<N;++i){
            sum += A[i];
        }
        return floor(sum/N);
    }
};