class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& image,
             int newColor, int initColor) {

        int n = image.size();
        int m = image[0].size();

        image[r][c] = newColor;

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        for (int k = 0; k < 4; k++) {
            int nrow = r + drow[k];
            int ncol = c + dcol[k];

            if (nrow >= 0 && nrow < n &&
                ncol >= 0 && ncol < m &&
                image[nrow][ncol] == initColor) {

                dfs(nrow, ncol, image, newColor, initColor);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                  int sr, int sc, int color) {

        int initColor = image[sr][sc];

        if (initColor == color)
            return image;

        dfs(sr, sc, image, color, initColor);
        return image;
    }
};
