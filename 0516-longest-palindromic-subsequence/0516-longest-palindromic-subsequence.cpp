class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        vector<vector<int>> mat(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            mat[i][i] = 1;
        }

        for (int len = 2; len <= n; len++) {
            for (int i = 0; i + len - 1 < n; i++) {
                int j = i + len - 1;

                if (s[i] == s[j]) {
                    if (len == 2)
                        mat[i][j] = 2;
                    else
                        mat[i][j] = mat[i+1][j-1] + 2;
                } else {
                    mat[i][j] = max(mat[i+1][j], mat[i][j-1]);
                }
            }
        }

        return mat[0][n - 1];
    }
};
