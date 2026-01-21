class Solution {
public:
    void dfs (int row , int col , vector<vector<int>> &vis, vector<vector<char>> &board){
        int n = board.size();
        int m = board[0].size();
        vis[row][col] = 1;

        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};

        for(int i = 0; i < 4; i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
               !vis[nrow][ncol] && board[nrow][ncol] == 'O'){
                dfs(nrow, ncol, vis, board);
            }
        }
    }

    void solve(vector<vector<char>>& board) {

        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        // WRONG:
        // if(!vis[0][j] && board[0][j]=='O'){
        //     dfs(0,j,vis,board);
        // }
        // CORRECT (same, kept for consistency)
        // Top row correct already.

        // WRONG:
        // if(!vis[m-1][j] && board[m - 1][j]=='O'){
        //     dfs(n-1,j,vis,board);
        // }
        // CORRECT:
        // use n-1 instead of m-1
        for(int j = 0; j < m; j++){
            if(!vis[0][j] && board[0][j] == 'O')
                dfs(0, j, vis, board);

            // WRONG: vis[m-1][j]
            // if(!vis[m-1][j] && board[m - 1][j]=='O'){
            //     dfs(n-1,j,vis,board);
            // }

            // CORRECT:
            if(!vis[n-1][j] && board[n-1][j] == 'O')
                dfs(n-1, j, vis, board);
        }

        // WRONG:
        // if(!vis[0][i] && board[0][i]=='O'){
        //     dfs(i,0,vis,board);     // wrong arguments
        // }
        // CORRECT:
        // dfs(i,0) is wrong → should be dfs(i,0) for left col, dfs(i,m-1) for right col

        for(int i = 0; i < n; i++){

            // WRONG: dfs(i,0) triggered by top-row condition
            // if(!vis[0][i] && board[0][i]=='O'){
            //     dfs(i,0,vis,board);
            // }

            // CORRECT: left column check
            if(!vis[i][0] && board[i][0] == 'O')
                dfs(i, 0, vis, board);

            // WRONG:
            // if(!vis[m-1][i] && board[m- 1][i]=='O'){
            //     dfs(i,m-1,vis,board);
            // }

            // CORRECT: right column check
            if(!vis[i][m-1] && board[i][m-1] == 'O')
                dfs(i, m-1, vis, board);
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j])
                    board[i][j] = 'X';
            }
        }
    }
};
