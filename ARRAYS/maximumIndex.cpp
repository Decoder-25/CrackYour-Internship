int maxIndexDiff(int arr[], int n) 
    { 
        // Your code here
        int lmin[n], rmax[n];
        lmin[0] = arr[0];
        for (int i=1; i<n; i++){
            lmin[i] = min(arr[i], lmin[i-1]);
        }
        
        rmax[n-1] = arr[n-1];
        for (int i=n-2; i>=0; i--){
            rmax[i] = max(arr[i], rmax[i+1]);
        }
        
        int i=0, j=0;
        int res = -1;
        while(i<n and j<n){
            if (lmin[i] <= rmax[j]){
                res = max(res, j-i);
                j++;
            }else{
                i++;
            }
        }
        
        return res;
        
    }