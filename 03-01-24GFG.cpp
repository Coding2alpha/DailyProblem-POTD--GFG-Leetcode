class Solution {
  public:
    int smallestSubstring(string S) {
        int i=0,j=0;
        int n=S.length();
        vector<int> mp(3,0);
        int ans=1e9;
        while(i<n && j<n)
        {
            mp[S[j]-'0']++;
            if(mp[0] && mp[1] && mp[2])
            {
                ans=min(ans,j-i+1);
            }
            if(mp[0]>=1 && mp[1]>=1 && mp[2]>=1)
            {
                while(mp[0]>=1 && mp[1]>=1 && mp[2]>=1)
                {
                    if(mp[S[i]-'0']>=2 && (mp[0] && mp[1] && mp[2]))
                    {
                        mp[S[i]-'0']--;
                        i++;
                        ans=min(ans,j-i+1);
                    }
                    else
                    {
                        break;
                    }
                }
            }
            j++;
        }
        if(ans==1e9)
        {
            return -1;
        }
        return ans;
    }
};