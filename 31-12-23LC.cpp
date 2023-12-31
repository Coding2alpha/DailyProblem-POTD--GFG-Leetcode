class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<int,pair<int,int>> mp;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                mp[s[i]].second=i;
            }
            else
            {
                mp[s[i]].first=i;
                mp[s[i]].second=i;
            }
        }
        int ans=-1;
        for(auto it:mp)
        {
            int x=it.second.first;
            int y=it.second.second;
            int k=y-x-1;
            if(k>=0)
            {
                ans=max(ans,k);
            }
        }
        return ans;
    }
};