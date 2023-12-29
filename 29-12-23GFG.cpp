class Solution {
public:

    int solve(int i,int day,vector<int>& jobDifficulty, int d,int n,vector<vector<int>> &dp)
    {
        if(day>=d && i>=n)
        {
            return 0;
        }
        if(i<n && day>=d)
        {
            return 1e9;
        }
        if(dp[i][day]!=-1)
        {
            return dp[i][day];
        }
        int maxi=0;
        int ans=INT_MAX;
        for(int j=i;j<n;j++)
        {
            maxi=max(maxi,jobDifficulty[j]);
            if(n-j>=d-day)
            {
                // cout<<j<<" "<<day+1<<endl;
                ans=min(ans,maxi+solve(j+1,day+1,jobDifficulty,d,n,dp));
            }
        }
        return dp[i][day]=ans;
    }

    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n=jobDifficulty.size();
        if(d>n)
        {
            return -1;
        }
        vector<vector<int>> dp(n,vector<int>(d,-1));
        return solve(0,0,jobDifficulty,d,n,dp);
    }
};