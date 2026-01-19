// class Solution {
// public:
//     void bfs(int r, int c,vector<vector<int>> &vis, vector<vector<char>>& grid){
//         queue<pair<int,int>>q;
//         vis[r][c]=1;
//         q.push({r,c});
//         int n=grid.size();
//         int m=grid[0].size();
//         while(!q.empty()){
//             int row=q.front().first;
//             int col=q.front().second;
//             q.pop();
//             for( int delrow=-1;delrow<=1;delrow++){
//                 for( int delcol=-1;delcol<=1;delcol++){
//                 if (delrow == 0 && delcol == 0) continue;

//                     int nrow=row+delrow;
//                     int mcol=col+delcol;

//                     if(nrow>=0 && nrow<n && mcol>=0 && mcol<m && grid[nrow][mcol] =='1' && !vis[nrow][mcol]){
//                         vis[nrow][mcol]=1;
//                         q.push({nrow,mcol});
//                     }
//                 }
//             }
//         }


//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int row=grid.size();
//         int col=grid[0].size();
//         vector<vector<int>> vis(row,vector<int>(col,0));
//         int count=0;
//         for( int i=0;i<row;i++){
//             for(int j = 0;j<col;j++ ){
//                 if(grid[i][j]=='1' && !vis[i][j]){
//                     count++;
//                     bfs(i , j ,vis , grid);
//                 }

//             }
//         }
//         return count;

//     }
// };


class Solution {
public:
    void bfs(int r, int c, vector<vector<int>> &vis, vector<vector<char>>& grid){
        queue<pair<int,int>> q;
        vis[r][c] = 1;
        q.push({r, c});

        int n = grid.size();
        int m = grid[0].size();

        // 4-direction movements (UP, RIGHT, DOWN, LEFT)
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int k = 0; k < 4; k++) {
                int nrow = row + dr[k];
                int ncol = col + dc[k];

                if (nrow >= 0 && nrow < n &&
                    ncol >= 0 && ncol < m &&
                    grid[nrow][ncol] == '1' &&
                    !vis[nrow][ncol]) {

                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<vector<int>> vis(row, vector<int>(col, 0));
        int count = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    count++;
                    bfs(i, j, vis, grid);
                }
            }
        }
        return count;
    }
};
