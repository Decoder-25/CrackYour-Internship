class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> res;
        int leader = a[n-1];
        res.push_back(a[n-1]);
        for(int i =n-2; i>=0; --i){
            if(a[i]>=leader){
                res.push_back(a[i]);
                leader = a[i];
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};