long long subCount(long long arr[], int N, long long K)
	{
	    long long int cnt = 0;
	    unordered_map<long long int, int> mpp;
	    long long int sum = 0;
	    mpp[0]++;
	    for(int i = 0; i<N; ++i){
	        sum+=arr[i];
	        int rem = sum%K;
	        if(rem<0){
	            rem+=K;
	        }
	        if(mpp.find(rem)!=mpp.end()){
	            cnt+=mpp[rem];
	        }
	        mpp[rem]++;
	    }
	    return cnt;
	}