class Solution {
public:
    bool search(int i, int j, int n, int m, vector<vector<char>>& board, int k, string word) {
        if (k == word.size()) return true;
        if (i == n || i < 0 || j < 0 || j == m || board[i][j] != word[k]) {
            return false;
        }
        
        char ch = board[i][j];
        board[i][j] = '#';  
        bool op1 = search(i + 1, j, n, m, board, k + 1, word); 
        bool op2 = search(i - 1, j, n, m, board, k + 1, word); 
        bool op3 = search(i, j + 1, n, m, board, k + 1, word); 
        bool op4 = search(i, j - 1, n, m, board, k + 1, word); 
        
        board[i][j] = ch;
        
        return op1 || op2 || op3 || op4;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(); 
        int m = board[0].size(); 
        int k = word.size(); 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (search(i, j, n, m, board, 0, word)) {
                    return true;
                }
            }
        }

        return false;
    }
};