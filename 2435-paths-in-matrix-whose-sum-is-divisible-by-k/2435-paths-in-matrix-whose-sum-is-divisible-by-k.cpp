class Solution {
public:
    int mod=1e9+7;
    int func(int i,int j,int r,int m,int n,int k,vector<vector<int>>& grid,vector<vector<vector<int>>>&dp){
        if(i>=m || j>=n){
            return 0;
        }
        r=(r+grid[i][j])%k;
        if(dp[i][j][r]!=-1)return dp[i][j][r];
        if(i==m-1 && j==n-1){
            if(r==0)return dp[i][j][r]=1;
            
            return dp[i][j][r]=0;
        }
        return dp[i][j][r]=(func(i+1,j,r,m,n,k,grid,dp)+func(i,j+1,r,m,n,k,grid,dp))%mod;
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<vector<int>>>dp(m+1,vector<vector<int>>(n+1,vector<int>(k+1,-1)));
        return func(0,0,0,m,n,k,grid,dp)%mod;
        
    }
};