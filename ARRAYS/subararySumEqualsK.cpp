class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0)
            return 0;
        unordered_map<int, int> mpp;
        int currSum = 0;
        int i = 0, count = 0;
        while(i<n){
            currSum += nums[i];
            if(currSum == k){
                count++;
            }
            if(mpp.find(currSum - k)!= mpp.end()){
                count += mpp[currSum - k];
            }
            mpp[currSum]++;
            i++;
        }
        return count;
    }
};