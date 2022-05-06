class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = INT_MAX,ans =0;
        for(int j =0; j<prices.size(); j++){
            if(prices[j]<i){
                i = prices[j];
            }
            ans = max(ans, prices[j]-i);
        }
        return ans;
    }
};