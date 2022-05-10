int rows = board.size();
        int cols = board[0].size();
        vector<vector<int>> temp(rows + 2, vector<int> (cols + 2));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                    temp[i + 1][j + 1] = board[i][j];
            }
        }

        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= cols; j++) {
                int count = 0;
                for(int k = i - 1; k <= i + 1; k++) {
                    for (int l = j - 1; l <= j + 1; l++) {
                        count += temp[k][l];
                    }
                }
                
                if (temp[i][j] == 0 && count == 3) 
                    board[i - 1][j - 1] = 1;
                else if (temp[i][j] == 1 && ((count - 1) < 2 || (count - 1) > 3)) 
                    board[i - 1][j - 1] = 0;
                else 
                    board[i - 1][j - 1] = temp[i][j];
            }
        }
    }