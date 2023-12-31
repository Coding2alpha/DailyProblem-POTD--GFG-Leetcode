class Solution {
    
    public:
    
    int solve(int i,int sum,int N , int coins[],vector<vector<int>> &dp)
    {
        if(i>=N)
        {
            if(sum!=0 && (sum%20==0 || sum%24==0 || sum%2024==0))
            {
                return 1;
            }
            return 0;
        }
        if(dp[i][sum]!=-1)
        {
            return dp[i][sum];
        }
        int pick=solve(i+1,sum+coins[i],N,coins,dp);
        int notpick=solve(i+1,sum,N,coins,dp);
        if(pick+notpick>0)
        {
            return dp[i][sum]=1;
        }
        return dp[i][sum]=0;
    }
    
    int isPossible(int N , int coins[]) 
    {
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=coins[i];
        }
        vector<vector<int>> dp(N,vector<int>(sum+1,-1));
        return solve(0,0,N,coins,dp);
    }
    
};