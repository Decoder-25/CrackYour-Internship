class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        int temp[P] = {0};
        for(int i = 0; i<N; ++i){
            temp[arr[i]-1] += 1;
        }
        for(int j=0;j<N;j++){
        if(j<P){
            arr[j]=temp[j];
        }else{
            arr[j]=0;
        }
    }
  }
};
