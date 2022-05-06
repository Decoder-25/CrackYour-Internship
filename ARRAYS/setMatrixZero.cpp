class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       vector<vector<int>> vec=matrix;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vec[i][j]==0){
                    for(int x=0;x<m;x++){
                        matrix[x][j]=0;
                    }
                    for(int y=0;y<n;y++){
                        matrix[i][y]=0;
                    }
                }
            }
        }
    }
};