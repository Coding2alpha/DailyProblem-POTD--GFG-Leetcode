class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        int ans=0;
        while(i<n && j<s.size())
        {
            if(s[j]>=g[i])
            {
                ans++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};