class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n<2) return 1;
 
       int sumb=0;
       for(int i=0;i<n;i++)
       {
           sumb=sumb + a[i];
       }
      
      int suma=0;
       for(int i=1;i<n-1;i++)
       {
          suma=suma + a[i-1];
          if(sumb-suma-a[i] == suma) return i+1;
       }
       return -1;
    }

};