class Solution {
public:
    
    int func(int i,int j,int m,int n,vector<vector<int>>&dp){
        if(i==m-1 && j==n-1){
            return dp[i][j]=1;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        if(i>=m || j>=n)return dp[i][j]=0;
        return dp[i][j]=func(i+1,j,m,n,dp)+func(i,j+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(101,vector<int>(101,-1));
        //memset(dp,-1,sizeof(dp));
        return func(0,0,m,n,dp);
        
    }
};