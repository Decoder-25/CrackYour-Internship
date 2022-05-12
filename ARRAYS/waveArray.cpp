void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        for(int i = 0; i< n; i+=2){
            if(arr[i+1]> arr[i]){
                swap(arr[i], arr[i+1]);
            }
        }
        
    }