class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n=nums.size();
        if(n%2)
        {
            return false;
        }
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]%k]++;
        }
        for(auto it:mp)
        {
            while(it.second)
            {
                it.second--;
                int x=(k-it.first)%k;
                if(mp.find(x)!=mp.end() && mp[x]>0)
                {
                    mp[x]--;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};