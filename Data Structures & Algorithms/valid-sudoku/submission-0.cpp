class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            unordered_map<char, int> dup_r;
            unordered_map<char, int> dup_c;

            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    dup_r[board[i][j]]++;
                    if(dup_r[board[i][j]] > 1) return false;
                }

                if(board[j][i] != '.') {
                    dup_c[board[j][i]]++;
                    if(dup_c[board[j][i]] > 1) return false;
                }
            }
        }

        for(int i = 0; i < 9; i += 3) {
            for(int j = 0; j < 9; j += 3) {
                unordered_map<char, int> dup;

                for(int k = i; k < i + 3; k++) {
                    for(int l = j; l < j + 3; l++) {
                        if(board[k][l] != '.') {
                            dup[board[k][l]]++;
                            if(dup[board[k][l]] > 1) return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};