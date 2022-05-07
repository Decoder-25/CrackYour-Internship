class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        // as it's [1,n] array elements so we can apply this method easily;
        for(int i = 0; i<nums.size(); ++i){
            int res = abs(nums[i]);
            if(nums[res-1]<0){
                ans.push_back(abs(nums[i]));
            }
            nums[res-1] *= -1;
        }
        return ans;
    }
};