class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> m; int temp = 0;
        for(int x:nums)
            ++m[x];
        for(auto it:m){
            if(it.second>1){
                temp = it.first;
            }
        }
        return temp;
    }
};