class Solution {
private:
   bool dfs(vector<vector<char>>& board,int i,int j,int count,string word){
       if(count==word.size()) return true;
       if(i<0 or i>=board.size() or j<0 or j>=board[0].size() or board[i][j]!=word[count])
           return false;
       char temp=board[i][j]; //temporarily hide that character,as it's not counted again
       board[i][j]=' '; // in place(with an empty character)
       bool found=dfs(board,i+1,j,count+1,word) or //now go & search all 4 adjacent direc.
           dfs(board,i,j+1,count+1,word) or
           dfs(board,i-1,j,count+1,word) or
           dfs(board,i,j-1,count+1,word);
       board[i][j]=temp; //after traversal is done,keep board back to it's original form!
       return found;
   } 
public:
    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size();
        int col=board[0].size();
        for(int i=0;i<row;i++){ //search in the entire matrix
            for(int j=0;j<col;j++){ //for the starting char of the WORD
                if(board[i][j]==word[0] and dfs(board,i,j,0,word))//once that is found
                    //search in the adjacent for rest char of the words 
                    return true;// return true if all the char matched with adjacents
            }
        }
        return false; // else, if not found, return false
    }
};