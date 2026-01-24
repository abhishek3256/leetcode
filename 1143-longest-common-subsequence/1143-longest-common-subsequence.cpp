class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector<vector<int>> mat(m+1,vector<int>(n+1,0));
        for( int i=0;i<=n;i++){
            mat[0][i]=0;
        }
         for( int i=0;i<=m;i++){
            mat[i][0]=0;
        }
        for( int i=1;i<=m;i++){
            for( int j=1;j<=n;j++){
                if(text1[i-1]==text2[j-1]){
                    mat[i][j]=mat[i-1][j-1]+1;
                }
                else{
                    mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                }
            }
        }
        return mat[m][n];
        
    }
};