class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int n=cardPoints.size();
        int ans=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        ans=sum;
        int i=k-1,j=n-1;
        while(i>=0 && j>=n-k){
            sum-=cardPoints[i];
            sum+=cardPoints[j];
            i--;
            j--;
            ans=max(sum,ans);
        }
        return ans;
    }
};