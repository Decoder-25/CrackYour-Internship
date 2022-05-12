class Solution{
public:
    //Reversal algorithm
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        for(int i = 0; i<n; i+=k){
            int l = i, h = min(i+k-1, n-1);
            while(l<h){
                swap(arr[l], arr[h]);
                l++;
                h--;
            }
        }
    }
};