class Solution {
public:
    int climbStairs(int n) {
            if(n<=1) return 1;
        vector<int> dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        for(int state=2;state<=n;state++)
        {
            dp[state]=dp[state-1]+dp[state-2];
        }
        return dp[n];
        
    }
};