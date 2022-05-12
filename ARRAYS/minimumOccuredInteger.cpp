int maxOccured(int L[], int R[], int n, int maxx){
    
        // Your code here
        int arr[maxx] = {0};

        for(int i = 0; i < n; i++)
        {
            arr[L[i]] += 1;
            arr[R[i]+1] -= 1;
        }
        
        int maxi = arr[0], res = 0;
        
        for(int i = 1; i < maxx; i++)
        {
            arr[i] += arr[i-1];
            
            if(maxi < arr[i])
            {
                maxi = arr[i];
                res = i;
            }
        }

        return res;
        
    }